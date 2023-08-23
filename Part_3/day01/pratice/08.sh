#!/bin/bash
Network=$1
for Host in $(seq 1 254); do
    ping -c 1 $Network.$Host > /dev/null && result=0 || result=1
    if [ "$result"==0 ]; then
        echo -e "\033[32;1m$Network.$Host is up \033[0m"
        echo "$Network.$Host" >>/tmp/up.txt
    else
        echo -e "\033[;31m$Network.$Host is down \033[0m"
        echo "$Network.$Host" >>/tmp/down.txt
    fi
done
