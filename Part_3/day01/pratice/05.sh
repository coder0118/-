#!/bin/bash
cd /home/zhangjian/CODE/Part_1

ls -hls

ls *.c >ls.log

for i in $(cat ls.log); do
    tar -zxf $i &>/dev/null
done
