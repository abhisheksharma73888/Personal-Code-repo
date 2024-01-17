#!/usr/bin/env bash

if test "X$(id -un)" != "Xcavisson"; then
  echo "You must be logged in using cavisson to run automation..."
  exit 1
fi 

pkill -9 -f ant
pgrep -f ant 2>&1 >/dev/null

if test $? -eq 0; then
  echo "Seems like automation is already running..."
  exit 1
fi 

TIMESTAMP=$(date +%d%m%Y%H%M%S)
LOGS=/home/cavisson/workspace/logs

[[ ! -d $LOGS/automation ]] && mkdir -vp $LOGS/automation

targets="$*"

if [ $# -lt 1 ]; then
  echo "Error: Missing arguments..."
  cat <<+
Usage: $0 <targets>
  Where <targets> in:
    smoke       : run smoke testing 
    regression  : run regression testing
+
  exit 1
fi 

# Removing space
filename=$(tr ' ' '-' <<< $targets) 

LOG_OUT_FILE=$LOGS/automation/${filename}-${TIMESTAMP}.log
echo "Targets to run: $*"
echo "Log file is $LOG_OUT_FILE"
echo "Changing directory to /home/cavisson/workspace/Golang"

cd /home/cavisson/workspace/Golang

echo "nohup ant $targets >$LOG_OUT_FILE 2>&1 &"
nohup ant $targets >$LOG_OUT_FILE 2>&1 &
