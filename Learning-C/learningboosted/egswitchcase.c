#include<stdio.h>
int main(){
    float num1, num2;
    char op;
    printf("Enter the 2 number and one of the operators + - * / to define the operation you want to perform on the numberS\n"
            "For example to perform addition on 12 and 32 you enter\n 12 32 +\n"
            "Enter your input : ");
    scanf("%f %f %c", &num1, &num2, &op);
    
    switch(op) {
        case '+': printf("%.2f %c %.2f is equal to : %.2f\n", num1, op, num2,  num1+num2); break;
        case '-': printf("%.2f %c %.2f is equal to : %.2f\n", num1, op, num2,  num1-num2); break;
        case '*': printf("%.2f %c %.2f is equal to : %.2f\n", num1, op, num2,  num1*num2); break;
        case '/': if (num2==0){
                      printf("Can't divide a number by 0 you dumbfuck!\n");}
                  else {printf("%.2f %c %.2f is equal to : %.2f\n", num1, op, num2,  num1/num2);}
                  break;


        default: printf("Invalid input/s\n");
    }
return 0;
}
