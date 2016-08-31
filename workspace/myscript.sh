#!/bin/bash

clear
echo -n "Enter your name: "
read name

clear
echo "Hello $name."
echo "What is your favorite color?"
read color
clear
echo  "$color is a good color"
echo "Now saving that Info....."
echo "$name's favorite color is $color." >> color.log

echo "Data saved."
echo "Please press enter to continue"
read

clear
echo "Have a good day $name" 
