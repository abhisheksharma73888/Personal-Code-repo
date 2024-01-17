#!/usr/bin/env ruby
require "optparse"
require "logger"

# Global constants
LOG_OUT_FILE = "/var/log/automation/performance_metric.log"
MAX_BACKUP_INDEX = 3 
MAX_LOG_FILE_SIZE = 100 * 1024 # 100KB
LOGGER = Logger.new LOG_OUT_FILE, 3, 1024 * 100

# Hash to hold the various regexp
# for a performance tests
# TODO - This is too messy. 
#   Need to generate it dynamically or 
#   load from a YAML file
REGEX = {
  :req_sent_per_sec => /\d+\|HTTP Requests\(NA\)\|\d+\|\d+\|(?<metric>Requests Sent\/Sec\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :avg_resp_time    => /\d+\|HTTP Requests\(NA\)\|\d+\|\d+\|(?<metric>Average Response Time \(Secs\)\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :cpu_time_pct     => /\d+\|Process Stats Ex\(AppTier>fedora96>cav-stf-atg\)\|\d+\|\d+\|(?<metric>Cpu Time\(Pct\)\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :wrt              => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>Processes Waiting For Run Time\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :wfus             => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>Processes Waiting For UnInterruptible Sleep\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :Interrupts       => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>Interrupts\/Sec\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :context_switches => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>Context Switches\/Sec\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :cpu_util_pct     => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>CPU Utilization \(Pct\)\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :cpu_queue        => /\d+\|SysStats Linux Extended\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>CPU Queue \(%\)\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :load_avg         => /\d+\|System Load Stats\(AppTier>fedora-96\)\|\d+\|\d+\|(?<metric>Load Average Over 15 Minute\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :bt_per_sec       => /\d+\|Business Transactions\(AppTier>fedora96>atg>AllTransactions\)\|\d+\|\d+\|(?<metric>Requests per sec\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :bt_resp_time     => /\d+\|Business Transactions\(AppTier>fedora96>atg>AllTransactions\)\|\d+\|\d+\|(?<metric>Average Response Time \(ms\)\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
  :fp_per_sec       => /\d+\|FlowPath Stats\(AppTier>fedora96>atg\)\|\d+\|\d+\|(?<metric>Flowpaths per sec\(NA\))\|(?<avg>[\d.\-na]+)\|(?<min>[\d.]+)\|(?<max>[\d.]+)/m,
}

DEFAULT_PERF_DESC = {
  :bt_per_sec   => 'Requests per sec(NA)',
  :fp_per_sec   => 'Flowpaths per sec(NA)',
  :bt_resp_time => 'Average Response Time (ms)(NA)'
}

DEFAULT_PERF_METRIC = { :avg => 0.0, :min => 0.0, :max => 0.0 }

# Read GDF file and matches against the available
# regexes. 
# If match is found it is printed to the console
# else logs error to the logger file
def main(testrun)
  # if NS_WDIR is not set make it default to 
  # /home/netstorm/work
  ns_wdir = ENV['NS_WDIR'] || '/home/netstorm/work'

  gdf_file = "#{ns_wdir}/logs/TR#{testrun}/summary_gdf.data"
  LOGGER.info "GDF File is #{gdf_file}"

  data = load(gdf_file)
  LOGGER.info "Summary GDF size = #{data.size}"

  # process_with return a resp data
  process_with(data){ |resp| puts resp }
end

# Reads the summary gdf file
# @return [String] content of the file
def load(summary_gdf)
  unless File.exist? summary_gdf
    STDERR.write "#{summary_gdf} doesn't exists\n"
    LOGGER.error "#{summary_gdf} doesn't exists"
    exit 1
  end
  File.read(summary_gdf)
end

# Processes and yields back data
# Caller must pass a block to consume the data
def process_with(data)
  LOGGER.info "Total Regex to match = #{REGEX.size}"
  REGEX.each_key do |key|
    LOGGER.debug "Matching with key = #{key}"
    m = REGEX[key].match(data)
    if m
      yield format('%s,%s,%s,%s', m[:metric], m[:avg], m[:min], m[:max])
    else
      LOGGER.warn "No match found for { #{key} => #{DEFAULT_PERF_DESC[key]} }"
      yield format(
        '%s,%s,%s,%s', 
        DEFAULT_PERF_DESC[key], 
        DEFAULT_PERF_METRIC[:avg], 
        DEFAULT_PERF_METRIC[:min], 
        DEFAULT_PERF_METRIC[:max]
      )
    end
  end
end

if __FILE__ == $0
  testrun = nil
  parser = OptionParser.new do |opts|
    opts.on("-t", "--testrun TESTRUN", "the testrun number") do |arg|
      testrun = arg
    end
  end
  parser.parse!
  
  if testrun.nil?
    puts parser.help
    exit 1
  end
  main(testrun)
end
