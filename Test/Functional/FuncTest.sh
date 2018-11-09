#!/bin/bash

#Directory path name
inputPath='../Input'

#Get number of files
cd $inputPath
input_files="$(ls $dir | grep input)"
output_files="$(ls $dir | grep output)"
i=0

#Run Make file to create executable
#../../SRC/make

echo "${output_files[0]}"

for file in $input_files; do
	echo "Testing for $file"

	#Run executable with given input
	 ../../SRC/qs 'cat $file'  &> out.txt

	#Check diff on output given by program, and expected output
	if !(cmp -s out.txt ${output_files[0]}); then
		echo "Difference in test $file"
	fi
done