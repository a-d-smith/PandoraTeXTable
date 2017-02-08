#!/bin/bash

if [ $# -ne 1 ]; then
    echo "You need to pass an output file from Validation.C"
    return 0
fi

startline=$((`grep -n "fCorrect" $1 | head -n 1 | awk -F ":" '{print $1}'` - 1))
endline=`wc -l $1 | cut -f1 -d' '`
lines=$((1 + $endline - $startline))

namedir=`dirname $1`
name=`basename $namedir`

tail -n $lines $1 > Data_${name}.txt
sed -i '/^$/d' Data_${name}.txt
