#include<stdio.h>
/*a C program that asks user for two integers
 * stores them in variables
 * Calculates their sum, difference, product, and quotient
 * and display the results*/
int main(){
    int a, b;
    printf("Enter first & second number to perform operations on : \n");
    scanf("%d %d", &a, &b);

    printf("Sum of the two numbers is : %d\n", a+b);
    printf("Difference of the two numbers is : %d\n", a-b);
    printf("Product of the two numbers is : %d\n", a*b);
    printf("Quotient of num1/num2 is %.2f\n", (float)a/b);
    
    return 0;
}
