#!/usr/bin/env bash

echo "compile files..."
files=`ls *.c | grep -v 'cs50.c'`
echo $files
for file in $files
do
  echo "compile file $file with name ${file%%.c}"
  gcc $file -o build/${file%%.*} cs50.c
done
