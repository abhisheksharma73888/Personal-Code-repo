#!/usr/bin/env bash

RESULT_FILE=$1
TEST_RUNS=$(cat $RESULT_FILE|cut -d, -f2)

for trun in $TEST_RUNS; do
    PERF_FILE=$NS_WDIR/logs/TR$trun/perf.csv
    while read line; do
        metric=$(echo $line|cut -d, -f1)
        avg=$(echo $line|cut -d, -f2)
    done < $PERF_FILE
done
