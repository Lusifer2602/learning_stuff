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

//functions with no parameters done

void greetUser(char name[]) {
    printf("Hello %s! Welcome to Dunder Mifflin this is your manager Michael Gary Scott\n", name);
}

int main() {
    greetUser("Batman");
    return 0;
}


