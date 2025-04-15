# File Handling #
File is when we store a set of data within a single document.
We can do the follwing operations to a file:
1. Open
2. Create
3. Read & Write
4. Close

First we create a file' pointer using: 
FILE *fp=fopen("__.txt", <mode to be opened in>) //operations - read, write, append
* if the file does not exist it will first create the file and then open it

## Different modes possible in File Handling
W -> opne for writing only
R -> Reading
A -> append
w+ -> for both reading and writing --> creates new file if file doesn't exist, overwrites pre written data(older one will be lost)
r+ -> for both reading & writing --> NULL if the requested file doesn't exist
a+ -> for both reading & writing --> for appending data within pre existing data,  creates new file if it doesn't exist

R, W
fprintf, fscanf() to read from and write from content of al data types
getc(), putc() to read from and write characters to a file.
fgetc(), fputc() to read from and write characters to a file.
getw(), putw() to read from and write integers from a file.
fgets(), fputs() to read from and write strings to a file.
fread(), fwrite() to read from and write content as a structure to a file.

When fetching reading or writing data from a file we either get the data Sequentially and Randomly.

For Randomly we have 3 functions - fseek(), rewind(), ftell()
fseek() to choose where we want the pointer in our file.
frewind() will direct you back to beginning of the file.
    