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
void birthdate(){
    printf("Please enter your age to know what year you were born in : ");
    int age;
    scanf("%d", &age);
    printf("So you were born in the year : %d\n", 2025-age);
}

int main() {
    birthdate();

    return 0;
}


