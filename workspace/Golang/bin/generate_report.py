#!/usr/bin/python3

import csv
import sqlite3
import markup
import argparse

minified_css = '.container,table,td,th{border:1px solid #e0e0e0}body,th{color:#333}body{font-size:.9rem}.container{width:90%;padding:50px}table{border-collapse:collapse;width:80%}table,td,th{padding:10px;font-size:1em}th{background-color:#f5f5f5;text-align:left}.divider{border-top:1px solid #e0e0e0}.signature{color:#607d8b}.lead{font-size:1.68rem;color:#616161;font-weight:300}'

connection = sqlite3.connect(':memory:')
cursor = connection.cursor()

def sql_function(file_name):


	create_table = """CREATE TABLE IF NOT EXISTS data ( agent text, feature text, smoke_id text, TR integer,production_id integer, category integer, result text, details text)"""
	cursor.execute(create_table)

	def insert(values):
		cursor.execute("INSERT INTO data VALUES (?, ?, ?, ?, ?, ?, ?, ?)",values)
		connection.commit()

	with open(file_name,"r") as csv_file:
		csv_reader=csv.reader(csv_file)
		for line in csv_reader:
			insert(line)

	agents = cursor.execute("SELECT DISTINCT agent FROM data" )

	agents_list=[]
	for agent in agents:
		agents_list.extend(agent)


	features = cursor.execute("SELECT DISTINCT feature FROM data" )
	features_list=[]
	for feature in features:
		features_list.extend(feature)

	return agents_list, features_list

def feature_data(start_time, end_time, category, release, version, agent_type, features_list):
	page = markup.page()
	page.init(
	title='%s Report' % category,
	doctype='<!DOCTYPE html>'
	)
	page.div(_class='container')
	page.table(style='width: 92% !important; border: 0px;')
	page.tr()
	page.td(width='30%', style='border: 0px!important; padding: 0px!important')
	page.h2('{} Test Report'.format(category.capitalize()), _class='lead')
	page.td.close()
	page.td(width='70%', style='border: 0px!important; padding: 0px!important')
	page.table()
	page.tr()
	page.th('Status')
	page.th('Start Time')
	page.th('End Time')
	page.tr.close()
	page.tr()
	total_cases=cursor.execute("SELECT count(*) FROM data").fetchone()
	passed_cases=cursor.execute("SELECT count(*) FROM data WHERE result='pass'").fetchone()
	failed_cases=cursor.execute("SELECT count(*) FROM data WHERE result='fail'").fetchone()
	# print(failed_cases)
	if failed_cases[0] > 0:
		page.td('Failed', style='background-color: #FFCCCC')
	else:
		page.td('Passed', style='background-color: #E8F5E9')
	page.td(start_time)
	page.td(end_time)
	page.tr.close()
	page.table.close()
	page.td.close()
	page.tr.close()
	page.table.close()
	page.br()
	page.div(_class='divider')
	page.br()

	page.table()
	page.caption('Test Results', _class='lead')

	page.tr()
	page.th('Category')
	page.th('Total')
	page.th('Passed')
	page.th('Failed')
	page.tr.close()
	
	page.tr()
	page.td(category)
	page.td(total_cases[0])
	page.td(passed_cases[0])
	page.td(failed_cases[0])
	page.tr.close()
	page.table.close()
	page.br()
	page.br()
	page.br()

	page.table()
	page.tr()	
	page.th()
	for agent_type in agents_list:
		page.th(agent_type, colspan="3")
	page.tr.close()
	
	page.tr()
	page.th('Feature')
	for agent_type in agents_list:
		page.th('Total')
		page.th('Passed', width='10%')
		page.th('Failed', style='margin:15px;')
	page.tr.close()
	
	page.tr()
	for feature in features_list:
		page.td(feature)
		for agent_type in agents_list:	
			total=cursor.execute("SELECT count(*) FROM data WHERE agent='{}' and feature='{}'".format(agent_type,feature)).fetchone()
			passed=cursor.execute("SELECT count(*) FROM data WHERE agent='{}' and feature='{}' and result='pass'".format(agent_type,feature)).fetchone()
			failed=cursor.execute("SELECT count(*) FROM data WHERE agent='{}' and feature='{}' and result='fail'".format(agent_type,feature)).fetchone()
			
			page.td(total, style='color: blue; font-weight: bold')
			page.td(passed, style='color: green; font-weight: bold')
			page.td(failed, style='color: red; font-weight: bold')
		page.tr.close()
	page.table.close()
	page.br()
	page.br()
	page.br()

	for agent_type in agents_list:
		failed=cursor.execute("SELECT count(*) FROM data WHERE agent='{}' and result='fail'".format(agent_type)).fetchone()
		failed_cases=cursor.execute("SELECT * FROM data WHERE agent='{}' and result='fail'".format(agent_type)).fetchall()
		if failed[0] > 0:
			page.table()
			page.caption("Failed Cases:- {}".format(agent_type), _class='lead')
			page.tr()
			page.th('Feature')
			page.th('CaseId')
			page.th('TestRun', width='10%')
			page.th('Description')
			page.tr.close()
			for cases in failed_cases:
				page.tr()
				page.td(cases[1])
				page.td(cases[2])
				page.td(cases[3])
				page.td(cases[7])
				page.tr.close()
			page.table.close()
			page.br()
			page.br()
			page.br()

	for i in range(3): page.br()
	page.a(
		'Click to see online reports',
		href='http://10.10.30.37/reports/graphs/netjsagent/%s/%s/B%s' % (
		    category.lower(),
		    release,
		    version
	    ),
	    style='text-decoration: none; color: #263238;'
	)
	for i in range(2): page.br()

	page.div('Automation Team <br/>Cavisson Systems Inc.', _class='signature')
	page.div.close()
	page.style(minified_css)

	htmlpage = str(page)
	connection.close()
	return htmlpage

if __name__ == '__main__':
	parser = argparse.ArgumentParser()
	parser.add_argument('-c', '--category', help='the category', default='SMOKE')
	parser.add_argument('-r', '--release', help='the release name', required=True)
	parser.add_argument('-v', '--version', help='the build version', required=True)
	parser.add_argument('-f', '--infile', help='the result file', required=True)
	parser.add_argument('-o', '--outfile', help='the outfile to write to', default='/tmp/mail.body.html')
	parser.add_argument('-s', '--starttime', help='The startime', required=True)
	parser.add_argument('-e', '--endtime', help='The endtime', required=True)
	opts = parser.parse_args()

	agents_list, features_list = sql_function(opts.infile)
	with open(opts.outfile, 'w') as outfile:
		outfile.write(
		feature_data(
		    opts.starttime,
		    opts.endtime,
		    opts.category,
		    opts.release,
		    opts.version,
		    agents_list,
		    features_list
			)
		)

