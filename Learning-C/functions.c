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
//functions with parameter and return

int addvalues(long int a, long int b){
    return (a+b);
}

int main(){
    long int result=addvalues(1234,5678);
    printf("Alright son the sum to your numbers is %ld\n", result);

return 0;
}
