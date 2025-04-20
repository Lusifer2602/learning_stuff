#!/bin/bash
# and tonight we create a random int generator program to guess my bodycount lol
echo "Please enter the year you were born in"
read age
age=2025-$age
sleep 1
echo "so you are $age years old"
sleep 1
echo "with a body count of $RANDOM"

# we can also create our own variables within the terminal

# for example we want to create a command where we type batman and it gives the result bruce wayne
# then we'll just have to type in batman="Bruce Wayne"
# and then type in echo batman and it will deliver the output Bruce Wayne,
# but also if we want to do make the variable universally usable within the terminal then we can just
# use the command <export batman> and then everytime we just type-in batman we'll get the output as Bruce Wayne

echo "Since we used export on batman now when we use it as variable is shows us as $batman
yayyyyyyyyy!! ! ! !  ! ! !! ! !  ! ! ! !"

#ok so lets make batman permanent now and we do that by editing a file called .bashrc
