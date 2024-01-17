#!/usr/bin/env ruby
require 'optparse'

@parser = OptionParser.new do |opts|
  opts.on("-f", "--file FILE", "result file to read from") do |arg|
    @file = arg
  end
  opts.on("-o", "--out OUTFILE", "output file to write") do |arg|
    @out = arg
  end
end

@parser.parse!


def populate_test_cases(f)
  testcase = {}
  @testmeta = {}
  File.open(f).each do |line|
    # Read line and split to get the testid, testrun.
    # Remaining columns are ignored
    testid, testrun, compid, catid, status, desc = line.chomp.split(",")
    testcase[testid] = testrun
    @testmeta[testid] = desc
  end
  testcase
end


def readlines(f)
  lines = File.open(f).readlines
end 
  

def main
  @testcases = populate_test_cases(@file)
  records = {}
  @testcases.each do|testcase, testrun|
    perf_file = ENV['NS_WDIR'] + '/logs/TR' + testrun + '/perf.csv'
    lines = readlines(perf_file)
    d = {}
    lines.each do|line|
      metric, avg, min, max = line.chomp.split(',')
      metric = metric.gsub('(NA)','')
      d[metric] = [avg, min, max]
    end
    records[testcase] = d
  end
  html = get_html_data(records)
  write_html_data(html)
end


def write_html_data(html)
  File.open(@out, 'w').write(html);
end

def get_style_and_css
    html = "\t<style type='text/css'>"
    html += "\n\tbody{ font-size: .9em; color: #333}"
    html += "\n\ttable { border-collapse: collapse; width: 95%; }"
    html += "\n\ttable, th, td { border: 1px solid #D8D8D8; padding: 5px; }"
    html += "\n\tth { background-color: #F5F5F5 ; color: #333; text-align:left; }"
    html += "\n\ttr td:first-child { background-color: #FAFAFA; }"
    html += "\n\t</style>"
end


def get_html_data(records)
  html = "<!DOCTYPE html>\n"
  html += "<html>\n<head>\n"
  html +=  get_style_and_css
  html += "\n</head>\n<body>"
  html += "\n<p style='font-size: 1em;'>Hey there! <br/>The performance test has been completed at #{Time.now.strftime('%d/%m/%Y %H:%M:%S')}</p>"
  #html += "<p style='font-size: 1em;'>Performance test results metrics</p>"
  html += "<br/><br/>"
  html += "\n<table>\n"
  html += "\t<caption><b>Performance Comparison Results</b></caption>\n"
  html += "\t<tr>\n"

  first = records.keys.first 
  metrics = records[first].keys

  html += "\t\t<th>CaseID</th>\n"
  html += "\t\t<th>TR</th>\n"

  records[first].keys.each do|metric|
    html += "\t\t<th>#{metric}</th>\n"
  end

  html += "\t</tr>\n"

  records.each_key do |key|
    html += "\t<tr>\n"
    html += "\t\t<th>#{key}</th>\n"
    html += "\t\t<td>#{@testcases[key]}</td>\n"
    metrics.each do |metric|
      html += "\t\t<td>#{records[key][metric].first}</td>\n"
    end
    html += "\t</tr>\n"
  end

  html += "</table>\n"
  #html += "\t<br/><br/><h3>Performance testcase details</h3>\n"
  html += "\t<br/><br/>\n"
  html += "\t<hr style='color: #D8D8D8;'>\n"
  html += "\t<br/><br/>\n"
  html += "\t<table style='width: 70%;'>\n"
  html += "\t<caption><b>TestCase Details</b></caption>\n"
  html += "\t<tr>\n\t\t<th>CaseID</th>\n\t\t<th>Description</th>\n\t</tr>"
  @testmeta.each do |id, desc|
      html += "\t<tr>\n\t\t<td>#{id}</td>\n\t\t<td>#{desc}</td>\n\t</tr>"
  end
  html += "\n\t</table>\n"
  html += "<br/><br/><br/><br/>\nAutomation Team,<br/>Cavisson Systems Inc"
  html += "\n<br/><br/>"
  html += "\n<p style='color: #757575; font-size: .8em'>This is a system generated email. Please do not reply back to it."
  html += "For any queries email to <a href='mailto:dl-qa-auto@cavisson.com'>dl-qa-auto@cavisson.com</a> instead</p>"
  html += "</body>\n</html>"
end


if __FILE__ == $0
  unless @file && @out
    puts @parser.help
    exit 1
  end
  main
end
