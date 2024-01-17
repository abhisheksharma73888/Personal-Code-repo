#!/usr/bin/env bash

sleep 60

ndi_send_msg_ex  127.0.0.1 7898 "nd_control_req:action=get_bci_agents_info;Tier=NodeJS10;Server=Cav-30-48;fromTD=1;
">NodeJS_10.txt
ndi_send_msg_ex  127.0.0.1 7898 "nd_control_req:action=get_bci_agents_info;Tier=NodeJS14;Server=Cav-30-5;fromTD=1;
">NodeJS_14.txt
#ndi_send_msg_ex  127.0.0.1 7898 "nd_control_req:action=get_bci_agents_info;Tier=Kube_NodeJS_10;Server=10.10.70.40;fromTD=1;
#">Kube_NodeJS_10.txt
#ndi_send_msg_ex  127.0.0.1 7898 "nd_control_req:action=get_bci_agents_info;Tier=Kube_NodeJS_12;Server=10.10.70.40;fromTD=1;
#">Kube_NodeJS_12.txt
#ndi_send_msg_ex  127.0.0.1 7898 "nd_control_req:action=get_bci_agents_info;Tier=Kube_NodeJS_14;Server=10.10.70.40;fromTD=1;
#">Kube_NodeJS_14.txt
TestRunHome="/home/cavisson/NodeJS/logs/"
cd $TestRunHome
TR=$(ls -ltr $TestRunHome|grep "TR"|tail -1|awk {'print $9'})
TRidx=$(ls -ltr $TestRunHome|grep "TR"|tail -1|awk {'print $9'}|tr -d "TR")
#partition=$(ls -ltr $TR|awk {'print $9'}|grep 2021*)
partition=$(ls -ltr $TestRunHome/$TR/|awk {'print $9'}|grep -o [0-9]*)
NodeJS_10_pid=$(awk -F '|' '{print $10}' NodeJS_10.txt)
NodeJS_14_pid=$(awk -F '|' '{print $10}' NodeJS_14.txt)
#Kube_NodeJS_10_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_10.txt)
#Kube_NodeJS_12_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_12.txt)
#Kube_NodeJS_14_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_14.txt)

         ######################################### Process-Dump ###################################

ndi_communicate_with_ndc 127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=NodeJS10_Cav-30-48_cav-nsecom-01;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;
"
ndi_communicate_with_ndc 127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=NodeJS14_Cav-30-5_cav-nsecom-10;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;
"
#ndi_communicate_with_ndc 127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_10_10.10.70.40_nsecomm;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;

#ndi_communicate_with_ndc 127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_12_10.10.70.40_nsecomm;Tier=Kube_NodeJS_12;Server=10.10.70.40;Instance=nsecomm;

#ndi_communicate_with_ndc 127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_14_10.10.70.40_nsecomm;Tier=Kube_NodeJS_14;Server=10.10.70.40;Instance=nsecomm;

sleep 10


ndi_communicate_with_ndc 127.0.0.1 7898 "download_file_req:Id=1;FileName=NodeJS10_Cav-30-48_cav-nsecom-01.$NodeJS_10_pid;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/NodeJS/logs/$TR/$partition/server_logs/process_dumps/NodeJS10/Cav-30-48/cav-nsecom-01;
"
ndi_communicate_with_ndc 127.0.0.1 7898 "download_file_req:Id=1;FileName=NodeJS14_Cav-30-5_cav-nsecom-10.$NodeJS_14_pid;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/NodeJS/logs/$TR/$partition/server_logs/process_dumps/NodeJS14/Cav-30-5/cav-nsecom-10;
"
#ndi_communicate_with_ndc 127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_10_10.10.70.40_nsecomm.$Kube_NodeJS_10_pid;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/NodeJS/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_10/10.10.70.40/nsecomm;

#ndi_communicate_with_ndc 127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_12_10.10.70.40_nsecomm.$Kube_NodeJS_12_pid;Tier=Kube_NodeJS_12;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/NodeJS/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_12/10.10.70.40/nsecomm;

#ndi_communicate_with_ndc 127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_14_10.10.70.40_nsecomm.$Kube_NodeJS_14_pid;Tier=Kube_NodeJS_14;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/NodeJS/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_14/10.10.70.40/nsecomm;


exit 0
