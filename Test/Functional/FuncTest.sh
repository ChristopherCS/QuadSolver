#!/bin/bash

#Directory path name
inputPath='../Input/'


input_files=(one.input two.input)
output_files=(one.output two.output)

#Run Make file to create executable
#../../SRC/make



for i in `seq 0 1`; do
#	echo "Loop #$i" 
	inFile="${inputPath}${input_files[$i]}"
	outFile="${inputPath}${output_files[$i]}"
#	echo $inFile
	echo "Testing for $inFile"

	#Run executable with given input
	 ../../SRC/qs `cat $inFile` &> out.txt 

	#Check diff on output given by program, and expected output
	diff out.txt $outFile

#	echo "Ending Loop #$i"
done