#!/usr/bin/env python
import bs4
import markup
import argparse
import os
import time

HEADERS = ['Time of creation', 'Core', 'Stack Trace']

core_list = []

minified_css = '.container,table,td,th{border:1px solid #e0e0e0}body,th{color:#333}body{font-size:.9rem}.container{width:90%;padding:50px}table{border-collapse:collapse;width:80%}table,td,th{padding:10px;font-size:1em}th{background-color:#f5f5f5;text-align:left}.divider{border-top:1px solid #e0e0e0}.signature{color:#607d8b}.lead{font-size:1.68rem;color:#616161;font-weight:300}'


def generate_htmlpage(release, version):
    page = markup.page() 
    page.init(
        title='Core Dump Report', 
        doctype='<!DOCTYPE html>'
    )
    page.div(_class='container')
    page.table(style='width: 92% !important; border: 0px;') 
    page.tr() 
    page.td(width='50%', style='border: 0px!important; padding: 0px!important')
    page.h2('[ALERT] Core Dump Detected', _class='lead')
    page.td.close() 

    page.td(width='50%', style='border: 0px!important; padding: 0px!important')
    page.table()
    page.tr()
    page.th('No. of cores found')
    page.tr.close()
    page.tr()
    page.td(len(core_list))
    page.tr.close()
    page.table.close()
    page.td.close()
    page.tr.close()
    page.table.close()
    page.br()
    page.div(_class='divider')
    page.br() 
    
    if len(core_list) > 0: 
        page.table()
        page.caption('List of Cores Found', _class='lead')
        page.br()
        page.tr()
        page.th('Time of Creation')
        page.th('Core') 
        page.th('Stack Trace') 
        page.tr.close() 
        for core in core_list:
            page.tr() 
            page.td(core.get('ctime'))
            page.td(core.get('name'))
            page.td(core.get('desc'))
            page.tr.close() 
        page.table.close()
    for i in range(2): page.br()
    
    page.div('Automation Team <br/>Cavisson Systems Inc.', _class='signature') 
    page.div.close()  
    page.style(minified_css) 
    htmlpage = bs4.BeautifulSoup(str(page), "html.parser").prettify()
    return htmlpage


def parse_results_file(f):
    with open(f) as rfile: 
        for line in rfile:
            name, desc = line.strip().split('|')
            desc = desc.strip()
            ctime = time.ctime(os.path.getmtime(name))
            hash_data = dict(
                ctime=ctime,
                name=name, 
                desc=desc
            )
            core_list.append(hash_data)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-r', '--release', help='the release name', required=True)
    parser.add_argument('-v', '--version', help='the build version', required=True) 
    parser.add_argument('-f', '--infile', help='the result file', required=True)
    parser.add_argument('-o', '--outfile', help='the outfile to write to', default='/tmp/mail.body.htnl')
    opts = parser.parse_args()
   
    parse_results_file(opts.infile)
    
    with open(opts.outfile, 'w') as outfile:
        outfile.write(
            generate_htmlpage(
                opts.release, 
                opts.version
            )
        )
