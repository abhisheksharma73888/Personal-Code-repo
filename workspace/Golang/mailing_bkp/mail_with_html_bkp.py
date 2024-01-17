#!/usr/bin/env python3

import smtplib
import os
import config as cfg
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('-r', '--agentrelease', help="agent release number")
parser.add_argument('-b', '--agentbuild', help="agent build number")
parser.add_argument('-R', '--nsrelease', help="ns release number")
parser.add_argument('-B', '--nsbuild', help="ns build number")
parser.add_argument('-A', '--project', help="project Name")
args = parser.parse_args()

#detect the project name from args
html_home="/home/cavisson/DotNET/PHP_Mailing/{0}".format(args.project)
html_file = "{0}.mail.body.html".format(args.project)

if args.nsrelease and args.nsbuild and args.agentrelease and args.agentbuild:
    report_file = open(os.path.join(html_home, html_file), 'r')
    html = report_file.read()
    Subject = "[PHPAGENT] NetDiagnostics Smoke results for NS- R{0}.B{1} | Agent- R{2}.B{3}".format(args.nsrelease, args.nsbuild, args.agentrelease, args.agentbuild)

    # Create message container - the correct MIME type is multipart/alternative.
    msg = MIMEMultipart('alternative')
    msg['Subject'] = Subject
    msg['From'] = cfg.mailing["From"]
    msg['To'] = cfg.mailing["To"]
    msg['Cc'] = cfg.mailing["Cc"]

    # Attach parts into message container.
    msg.attach(MIMEText(html, 'html'))
    
    server = smtplib.SMTP(cfg.mailing["Server"])
    server.starttls()
    server.login(cfg.mailing["From"], cfg.mailing["Pass"])
    server.sendmail(cfg.mailing["From"],cfg.mailing["To"],msg.as_string())
    server.quit()
else:
    print ("Insert Proper args")

