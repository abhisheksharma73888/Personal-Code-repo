#!/bin/bash

ls > file.txt
while read -r line;do
prof=("$line" "$line" .)
for prof in "${prof[@]}";do
        if [ -d "$prof" ]; then
                cp -r "$prof" "$prof/"
                rm -rf $line/$line/*
                mv $line/nd.conf $line/$line
                break
        else
                echo "Directories NOT copied"
        fi
done
done < file.txt

