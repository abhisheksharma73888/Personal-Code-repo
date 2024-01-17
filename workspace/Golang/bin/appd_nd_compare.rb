#!/usr/bin/env ruby

require 'optparse'

@parser = OptionParser.new do |opts|
    opts.on('-f', '--file FILE', 'result file') do |arg|
        @file = arg
    end
    opts.on('-o', '--outfile OUTFILE', 'the outfile to write to') do |arg|
        @outfile = arg
    end
    opts.on('-t', '--tolerance TOLERANCE', Float, 'the tolerance pct') do |arg|
        @tolerance = arg
    end
    opts.on('-l', '--label REPORT TITLE', 'the report title') do |arg|
        @title = arg
    end
end
@parser.parse!

unless @file && @outfile
    puts @parser.help
    exit
end

@testruns = []
@details = []

File.open(@file).each do |line|
    caseid, tr, categoryid, compid, status, desc = line.chomp.split(',')
    @details << "#{caseid}:#{desc}"
    @testruns << tr
end

@baseline = 20008
cmd = "gen_compare_report.rb" \
      " -b #{@baseline}" \
      " -t #{@testruns.join(',')}" \
      " -d \"PERF-001-013:All ND Keywords Enabled,#{@details.join(',')}\"" 

cmd += " -p #{@tolerance}" if @tolerance
cmd += " -l \"#{@title}\"" if @title

html = `#{cmd}`

File.open(@outfile, 'w').write(html)
