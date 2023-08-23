#!/bin/bash

grade=$1
if [ $grade -gt 90 ]; then
    echo "very good"
elif [ $grade -gt 70 ]; then
    echo "good"
elif [ $grade -ge 60 ]; then
    echo "pass"
else
    echo "failed"
fi
