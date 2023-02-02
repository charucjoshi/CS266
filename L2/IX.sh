#!/bin/bash
read -p "Enter n : " n
ans=$(expr $(expr $(expr $n + 1) \* $n) / 2 )
echo Answer = $ans

