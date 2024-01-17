#!/usr/bin/env python3

import smtplib
import os
import config as cfg
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('-R', '--nsrelease', help="ns release number")
parser.add_argument('-B', '--nsbuild', help="ns build number")
parser.add_argument('-A', '--project', help="project Name")
args = parser.parse_args()

#detect the project name from args
html_home="/home/cavisson/workspace/Golang/GOMailing/{0}".format(args.project)
html_file = "{0}.mail.body.html".format(args.project)

if args.nsrelease and args.nsbuild:
    report_file = open(os.path.join(html_home, html_file), 'r')
    html = report_file.read()
    Subject = "[Golang] NetDiagnostics Smoke results for NS- R{0}.B{1}".format(args.nsrelease, args.nsbuild)

    # Create message container - the correct MIME type is multipart/alternative.
    msg = MIMEMultipart('alternative')
    msg['Subject'] = Subject
    msg['From'] = cfg.mailing["From"]
    msg['To'] = ", ".join(cfg.mailing["To"])
    msg['Cc'] = ", ".join(cfg.mailing["Cc"])

    # Attach parts into message container.
    msg.attach(MIMEText(html, 'html'))
    
    server = smtplib.SMTP(cfg.mailing["Server"])
    server.starttls()
    server.set_debuglevel(1)
    server.login(cfg.mailing["From"], cfg.mailing["Pass"])
    server.sendmail(cfg.mailing["From"],cfg.mailing["To"]+cfg.mailing["Cc"],msg.as_string())
    server.quit()
else:
    print ("Insert Proper args")

