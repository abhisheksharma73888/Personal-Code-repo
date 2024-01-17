 #!/usr/bin/env bash

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
TestRunHome="/home/cavisson/work/logs/"
cd $TestRunHome
TR=$(ls -ltr $TestRunHome|grep "TR"|tail -1|awk {'print $9'})
TRidx=$(ls -ltr $TestRunHome|grep "TR"|tail -1|awk {'print $9'}|tr -d "TR")
partition=$(ls -ltr $TR|awk {'print $9'}|grep 2021*)
NodeJS_10_pid=$(awk -F '|' '{print $10}' NodeJS_10.txt)
NodeJS_14_pid=$(awk -F '|' '{print $10}' NodeJS_14.txt)
#Kube_NodeJS_10_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_10.txt)
#Kube_NodeJS_12_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_12.txt)
#Kube_NodeJS_14_pid=$(awk -F '|' '{print $10}' Kube_NodeJS_14.txt)

         ######################################### Heap-Dump ###################################

ndi_communicate_with_ndc  127.0.0.1 7898 "run_async_command_req:Command=nsi_get_java_heap_dump;AgentType=NodeJS;Arguments= -p $NodeJS_10_pid -u cavisson -w 300000 -l /tmp/NodeJS10_Cav-30-48_cav-nsecom-01.hd.heapsnapshot;DownloadFile=2;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;TestRun=$TRidx;Path=/tmp/NodeJS10_Cav-30-48_cav-nsecom-01.hd.heapsnapshot;TimeOut=5;ExecuteForceFully=0;CompressMode=1;PartitionIdx=$partition;NS_PATH=server_logs/heap_dumps;
"
ndi_communicate_with_ndc  127.0.0.1 7898 "run_async_command_req:Command=nsi_get_java_heap_dump;AgentType=NodeJS;Arguments= -p $NodeJS_14_pid -u cavisson -w 300000 -l /tmp/NodeJS14_Cav-30-5_cav-nsecom-10.hd.heapsnapshot;DownloadFile=2;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;TestRun=$TRidx;Path=/tmp/NodeJS14_Cav-30-5_cav-nsecom-10.hd.heapsnapshot;TimeOut=5;ExecuteForceFully=0;CompressMode=1;PartitionIdx=$partition;NS_PATH=server_logs/heap_dumps;
"
#ndi_communicate_with_ndc  127.0.0.1 7898 "run_async_command_req:Command=nsi_get_java_heap_dump;AgentType=NodeJS;Arguments= -p $Kube_NodeJS_10_pid -u cavisson -w 300000 -l /tmp/Kube_NodeJS_10_10.10.70.40_nsecomm.hd.heapsnapshot;DownloadFile=2;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;TestRun=$TRidx;Path=/tmp/Kube_NodeJS_12_10.10.70.40_nsecomm.hd.heapsnapshot;TimeOut=5;ExecuteForceFully=0;CompressMode=1;PartitionIdx=$partition;NS_PATH=server_logs/heap_dumps;
#"
#ndi_communicate_with_ndc  127.0.0.1 7898 "run_async_command_req:Command=nsi_get_java_heap_dump;AgentType=NodeJS;Arguments= -p Kube_NodeJS_12_pid -u Deep -w 300000 -l /tmp/Kube_NodeJS_12_10.10.70.40_nsecomm.hd.heapsnapshot;DownloadFile=2;Tier=Kube_NodeJS_12;Server=10.10.70.40;Instance=nsecomm;TestRun=$TRidx;Path=/tmp/Kube_NodeJS_12_10.10.70.40_nsecomm.hd.heapsnapshot;TimeOut=5;ExecuteForceFully=0;CompressMode=1;PartitionIdx=$partition;NS_PATH=server_logs/heap_dumps;
#"
#ndi_communicate_with_ndc  127.0.0.1 7898 "run_async_command_req:Command=nsi_get_java_heap_dump;AgentType=NodeJS;Arguments= -p Kube_NodeJS_14_pid -u Deep -w 300000 -l /tmp/Kube_NodeJS_14_10.10.70.40_nsecomm.hd.heapsnapshot;DownloadFile=2;Tier=Kube_NodeJS_14;Server=10.10.70.40;Instance=nsecomm;TestRun=$TRidx;Path=/tmp/Kube_NodeJS_14_10.10.70.40_nsecomm.hd.heapsnapshot;TimeOut=5;ExecuteForceFully=0;CompressMode=1;PartitionIdx=$partition;NS_PATH=server_logs/heap_dumps;
#"

         ######################################### Thread-Dump ###################################

ndi_send_msg_ex  127.0.0.1 7898 "nd_meta_data_req:action=get_thread_dump;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;CompressMode=0;TestNum=$TRidx;agentType=NodeJS;
"
ndi_send_msg_ex  127.0.0.1 7898 "nd_meta_data_req:action=get_thread_dump;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;CompressMode=0;TestNum=$TRidx;agentType=NodeJS;
"
#ndi_send_msg_ex  127.0.0.1 7898 "nd_meta_data_req:action=get_thread_dump;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;CompressMode=0;TestNum=$TRidx;agentType=NodeJS;
#"
#ndi_send_msg_ex  127.0.0.1 7898 "nd_meta_data_req:action=get_thread_dump;Tier=Kube_NodeJS_12;Server=10.10.70.40;Instance=nsecomm;CompressMode=0;TestNum=$TRidx;agentType=NodeJS;
#"
#ndi_send_msg_ex  127.0.0.1 7898 "nd_meta_data_req:action=get_thread_dump;Tier=Kube_NodeJS_14;Server=10.10.70.40;Instance=nsecomm;CompressMode=0;TestNum=$TRidx;agentType=NodeJS;
#"

         ######################################### Process-Dump ###################################

ndi_communicate_with_ndc  127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=NodeJS10_Cav-30-48_cav-nsecom-01;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;
"
ndi_communicate_with_ndc  127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=NodeJS14_Cav-30-5_cav-nsecom-10;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;
"
#ndi_communicate_with_ndc  127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_10_10.10.70.40_nsecomm;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;

#ndi_communicate_with_ndc  127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_12_10.10.70.40_nsecomm;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;

#ndi_communicate_with_ndc  127.0.0.1 7898 "nd_control_req:action=captureProcessCoreDump;coreDumpCommandPath=/tmp;coreDumpFileName=Kube_NodeJS_14_10.10.70.40_nsecomm;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;

sleep 5s


ndi_communicate_with_ndc  127.0.0.1 7898 "download_file_req:Id=1;FileName=NodeJS10_Cav-30-48_cav-nsecom-01.$NodeJS_10_pid;Tier=NodeJS10;Server=Cav-30-48;Instance=cav-nsecom-01;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/work/logs/$TR/$partition/server_logs/process_dumps/NodeJS10/Cav-30-48/cav-nsecom-01;
"
ndi_communicate_with_ndc  127.0.0.1 7898 "download_file_req:Id=1;FileName=NodeJS14_Cav-30-5_cav-nsecom-10.$NodeJS_14_pid;Tier=NodeJS14;Server=Cav-30-5;Instance=cav-nsecom-10;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/work/logs/$TR/$partition/server_logs/process_dumps/NodeJS14/Cav-30-5/cav-nsecom-10;
"
#ndi_communicate_with_ndc  127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_10_10.10.70.40_nsecomm.$Kube_NodeJS_10_pid;Tier=Kube_NodeJS_10;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/work/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_10/10.10.70.40/nsecomm;

#ndi_communicate_with_ndc  127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_12_10.10.70.40_nsecomm.$Kube_NodeJS_12_pid;Tier=Kube_NodeJS_12;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/work/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_12/10.10.70.40/nsecomm;

#ndi_communicate_with_ndc  127.0.0.1 7898 "download_file_req:Id=1;FileName=Kube_NodeJS_14_10.10.70.40_nsecomm.$Kube_NodeJS_14_pid;Tier=Kube_NodeJS_14;Server=10.10.70.40;Instance=nsecomm;FileType=/tmp;TimeOut=3600000;CompressMode=0;DeleteFile=0;Path=/home/cavisson/work/logs/$TR/$partition/server_logs/process_dumps/Kube_NodeJS_14/10.10.70.40/nsecomm;

exit 0

