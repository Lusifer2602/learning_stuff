import os
a=input("Enter name of the file you want to create : ")

with open(a, 'a') as file:
    file.write('This is just a random text to test something')

print("Now we will erase the same file")
os.remove(a)
