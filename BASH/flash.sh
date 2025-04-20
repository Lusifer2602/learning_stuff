#!/bin/bash
# we can also use terminal commands under variables and use them to run a set of commands at the same time using a script

echo "Okayyy lets run this now!!!"
date=$(date)
directory=$(pwd)
user=$(whoami)
sleep 2

echo "So your name seems to be $user"
sleep 1
echo "and you are running this script on $date"
sleep 1
echo "in the directory . . . $directory"
