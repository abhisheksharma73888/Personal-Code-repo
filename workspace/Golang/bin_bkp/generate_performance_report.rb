#!/usr/bin/env ruby 
require 'erb'
require 'optparse'
require 'logger'

LOGGER = Logger.new('/tmp/performance_report.log', 3, 100 * 1024)

def parse_results(file)
  baseline_list = []
  current_list = []
  meta_hash = {}

  records = File.readlines(file)
  baseline_list = records.first.chomp.split(',')
  records[1..records.size].each { |record| current_list << record.chomp.split(',') }
  
  # First field is the key, last one is the description or value
  meta_hash[baseline_list.first] = baseline_list.last
  current_list.each { |rec| meta_hash[rec.first] = rec.last }
  return [meta_hash, baseline_list, current_list]
end


def process(file)
  testruns = []
 
  File.open(file).each do  |line| 
    _,_, testrun, *_ = line.chomp.split(',')
    testruns << testrun
  end
 
  perf_hash = {}
 
  # For each test run 
  # Get the performance data as a hash with
  # Key as the metric description
  # Store the key, value pair into a hashh
  testruns.each do |testrun|
    perf_csv = format('%s/logs/TR%s/perf.csv', ENV['NS_WDIR'], testrun)
    local_hash = process_internal(perf_csv)
    perf_hash[testrun] = local_hash
    LOGGER.debug("#{testrun} => #{local_hash}")
  end
 
  return perf_hash
end

def process_internal(csv_file)
  lines = File.readlines(csv_file)
  perf_hash = {}
  lines.each do |line| 
    metric, *splat  = line.chomp.split(',')
    perf_hash[metric] = splat
  end
  return perf_hash
end

if __FILE__ == $0
  file = nil
  outfile = nil
  tolerance = nil
  parser = OptionParser.new do |opts|
    opts.on('-f', '--file FILE', 'the result file') { |arg| file = arg }
    opts.on('-o', '--out FILE', 'the file to write to') { |arg| outfile = arg }
    opts.on('-t', '--tolerance TOLERANCE', 'Tolerance Pct. Default 7.5') { |arg| tolerance = arg }
  end
  parser.parse!
  
  tolerance ||= 7.5

  unless file
    puts parser.help
    exit 1
  end

  unless File.exist?(file)
    LOGGER.error("File '#{file}' doesn't exists")
    STDERR.write("File '#{file}' doesn't exists\n")
    exit(1)
  end
  
  # table_headers = %w(CASEID TESTRUN CATEGORYID COMPONENTID STATUS DESCRIPTION)
  # meta_hash, baseline_list, current_list = parse_results(file)
  # perf_headers, metrics_array = process(file)
  # renderer = ERB.new(File.read('template.erb'), nil, '-')
  # puts renderer.result
  meta_records, baseline_list, current_list = parse_results(file)
  perf_hash = process(file)
  
  keys = perf_hash.keys
  baseline_key = keys.first
  current_keys = keys[1..keys.size]

  baseline_records = []
  current_records = []
  table_headers = perf_hash[baseline_key].keys

  perf_hash[baseline_key].each { |metric, list| baseline_records << list.last.to_f }
  
  current_keys.each do |key|
    alist = []
    perf_hash[key].each { |metric, list| alist << list.last.to_f }
    current_records << alist
  end

  
  template = File.join(ENV['PERFORMANCE'], 'config', 'template.erb') 
  renderer = ERB.new(File.read(template), nil, '-')
  report = renderer.result

  if outfile 
    File.open(outfile, 'wb').write(report)
  else 
    puts report
  end
end

