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


//lets try to create a sample calculator now like we did earlier

int sum(int a, int b);
int sub(int a, int b);
int product(int a, int b);
float quotient(int a, int b);

int main(){
printf("Okayyy asshole lets take input from you first\n"
        "Enter your fucking 2 numbers that you wanna perform the fucking operations on\n\n");

int num1, num2;
printf("Enter the first bowl of birdpiss here : ");
scanf("%d", &num1);
printf("Enter the another poop bag value here : ");
scanf("%d", &num2);

printf("\nNow enter the operation you want to perform on them\n"
        "1 to add\n2 to subtract,\n3 to multiply them\n4 to divide them\n");
int decide;
scanf("%d", &decide);

switch(decide){
    case 1:{
        int add=sum(num1,num2);
        printf("Here's your sum bitch : %d\n", add);
        break;}
    case 2:{
        int minus=sub(num1, num2);
        printf("Here's the difference bitch : %d\n", minus);
        break;}
    case 3:{
        int mult=product(num1, num2);
        printf("Ok mf the product is %d\n", mult);
        break;}
    case 4:{
        if(num2==0){
            printf("Nice try dickhead, but you can't divide by 0\n"); //divide by zero check
            break;
        }
        else{
        float div=quotient(num1, num2);
        printf("So the fucking quotient is %.2f\n", div);
        } //else statement ends here
        break;} //case 4 ends here
    default:
        printf("Galat input betichod kya kar rha h?!?!?!?!?!\n");
} //switch statement ends here

return 0;
}

int sum(int a, int b){
    return (a+b);
}
int sub(int a, int b){
    return(a-b);
}
int product(int a, int b){
    return(a*b);
}
float quotient(int a, int b){
return((float)a/b);
}
