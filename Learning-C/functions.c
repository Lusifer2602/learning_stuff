#include<stdio.h>
//you have to declare function before int main so you can directly call it in the program
//if you don't you have to do it anyways after you close the int main() function
//      you will never declare a function within int main(), it will always be either above or below int main()
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

//function with no parameters, no return done
//function with parameters, no retrun
//
//

int mult(int a, int b){
    return a*b;
}
int main(){
    int result=mult(12, 34);
    printf("Output is : %d\n", result);
    return 0;
}
