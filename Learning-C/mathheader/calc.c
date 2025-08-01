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
//ops on 2 numbers
int sum(int a, int b);
int sub(int a, int b);
int product(int a, int b);
int quotient(int a, int b);
int sum(float a, float b);
float modulus(float a, float b);
//op on a single number
float root(float a, float b);

int main(){
int decide1; float answer;
printf("First of all tell if your operation is going to be on single number or on two numbers");
scanf("%d", &decide1);
switch(decide1){
    case 1: {
        float number; char op;
            printf("Enter the number : ");
            scanf("%f", &number);
            printf("Enter the operation\n"
                    "p for raising it to a power\n"
                    "s for sq. root\n"
                    "r for other roots (you enter the int) : ")
            scanf("%c", &op);
            }
        switch(op){
            case 'p': {
            float power;
            printf("Enter the power you want to raise it to : ");
            scanf("%f", &power);
            answer=pow(number, power);
            printf("\nIt will be : %.3f\n", answer);
            }

            case 's': {
            answer=pow(number, 1.0/2);
            printf("\nSquare root will be : %f\n", answer);
            }

            case 'r': {
            float root;
            printf("Enter which root you want : ");
            scanf("%f", root);
            answer=pow(number, 1.0/2);
            printf("\nRoot will be : %.3f\n", answer);
            }
            default : {printf("\nInvalid Input nigger run the program again\n")};
            }//switch op ends here
            }//switch decide1 ends here

    case 2: { //This case is for when 2 numbers are being played with
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
        printf("Galat input betichod kya kar rha h?!?!?!?!?!\n");
} //switch statement ends here
} //case 2 statement ends here


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
float root(float a, float b){
    return pow(a,1.0/b);
}
float modulus(float a, float b);
    return (a%b);
}
