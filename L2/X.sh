#!/bin/bash

read -p "Enter the number : " num
rev=0
while [ $num -ne 0 ]
do
	rev=$(expr $rev \* 10)
	rev=$(expr $rev + $(expr $num % 10))
	num=$(expr $num / 10)
done
echo "Reverse = " $rev
