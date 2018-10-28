#!/bin/bash

#Directory path name
inputPath='../Input'

#Get number of files
cd $inputPath
files="$(ls $dir | grep input)"

#Run Make file to create executable
#../../SRC/make

for file in $files; do
	#echo "Testing for $file"

	#Run executable with given input
	# ../../SRC/quadSolver < $file > output.txt

	#Check diff on output given by program, and expected output
	# output.txt one.output
done