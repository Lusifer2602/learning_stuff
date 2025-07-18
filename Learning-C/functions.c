#include<stdio.h>
//you have to declare function before int main so you can directly call it in the program
//if you don't you have to do it anyways within the program after int main
//here's the structure for both
/* 
// Declaration
returnType functionName(parameter list);

// Definition
returnType functionName(parameter list) {
   // body of the function
   return value; // if returnType is not void
}

// Usage (call)
functionName(arguments);    */

// sample

void sayhello() { //when returnType is void you don't need to define return value at the end of the function
    printf("Hello sir welcome to the program\n");
    // return type won't be anything here
}

int main() {
    sayhello();
    return 0;
}
