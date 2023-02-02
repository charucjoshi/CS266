#! /bin/bash

echo "Fibonacci Series "
read -p "Enter Number of Terms (>1) : " n

first=0
second=1
echo $first
echo $second
for (( i=2; i<n; ++i ))
do
	third=$(expr $first + $second)
	first=$second
	second=$third
	echo $third
done



