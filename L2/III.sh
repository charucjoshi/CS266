#! /bin/bash

echo Enter Input I :
read inp1
echo Enter Input II :
read inp2

echo Enter the Arithmetic Operator [+,-,*,/]

read -n1 op

echo 
if [[ $op = "+" ]]; then
	echo Answer = 
	expr $inp1 + $inp2
elif [[ $op = "-" ]]; then
	echo Answer = 
	expr $inp1 - $inp2
elif [[ $op = "*" ]]; then
	echo Answer = 
	expr $inp1 \* $inp2
elif [[ $op = "/" ]]; then
	echo Answer = 
	expr $inp1 / $inp2
else
	echo Invalid Option!
fi
