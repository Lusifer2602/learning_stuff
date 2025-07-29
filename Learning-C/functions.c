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


void goodbye(char name[]){
    printf("Heyyyy buttplug GOODBYEEEEE!!\n Don't forget to shut the fuck up the next time i am telling you something Mr. %s\n", name);
}

int main(){
    char iname[20];
    printf("Enter your name my dear dickhead : ");
    scanf("%s", iname);
    goodbye(iname); 
return 0;
}


