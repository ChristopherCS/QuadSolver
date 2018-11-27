#!/bin/bash

#Directory path name
inputPath='../Input/'


input_files=(one.input two.input 
	three.input four.input five.input six.input
	seven.input eight.input nine.input)
output_files=(one.output two.output 
	three.output four.output five.output six.output
	seven.output eight.output nine.output)

#Run Make file to create executable
#../../SRC/make


for i in `seq 0 8`; do
#	echo "Loop #$i" 
	inFile="${inputPath}${input_files[$i]}"
	outFile="${inputPath}${output_files[$i]}"
#	echo $inFile
	echo "Testing for $inFile"
#	echo "Input $(cat $inFile)"

	#Run executable with given input
	 ../../SRC/qs `cat $inFile` &> out.txt 

#	echo "Output $(cat $outFile)"

	#Check diff on output given by program, and expected output
	diff out.txt $outFile

#	echo "Ending Loop #$i"
done