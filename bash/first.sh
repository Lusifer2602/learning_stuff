#!/bin/bash
#First line of bash always tells the system which interpreter to start runnin
echo "This is the directory we are currently working in"
pwd
echo "Now we will create a new sample dir and list it in this folder$(ls)"
sleep 1
touch batman.txt batman.pdf
mkdir sampledir
cd sampledir
echo -e "Now we have entered the new dir \n$(pwd)"
sleep 1
cd ..
sleep 1
echo -e "Now we have come back to the initial dir \n$(pwd)"
sleep 1
echo -e "\nThese are the contents of this folder $(ls) \n"
echo "Now we shall delete this folder $(rm -r sampledir)"
sleep 1
echo -e "These are the contents in this dir right now $(ls)\n"
sleep 1
echo -e "\nnow i'll remove those sample files"
rm batman.pdf batman.txt
sleep 1
echo "These are the files left here now $(ls)"
