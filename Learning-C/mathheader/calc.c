/*Write a C program that can perform multiple math operations based on user choice:
Addition
Subtraction
Multiplication
Division
Square root
Power
Modulus*/
#include<stdio.h>
#include<math.h>

float sum(int a, int b);
float sub(int a, int b);
float product(int a, int b);
float quotient(int a, int b);

int main(){
printf("Okayyy asshole lets take input from you first\n"
        "Enter your fucking 2 numbers that you wanna perform the fucking operations on\n\n");

int num1, num2;
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter second number here : ");
scanf("%d", &num2);

printf("\nNow enter the operation you want to perform on them\n"
        "1 to add\n2 to subtract,\n3 to multiply them\n4 to divide\n : ");
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
    case 4:{ //division here
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
        printf("Galat input betichod kya kar rha h?!?!?!?!?!\n";
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

