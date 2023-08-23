#!/bin/bash
i=99

for (( ; i > 0; i = i - 1)); do
    if [ $i%2==0 ]; then
        echo "$i'"
    fi
done
