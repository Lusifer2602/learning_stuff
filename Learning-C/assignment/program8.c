#include <stdio.h>
#include<conio.h>
long int factorial(long int);
void main()
{
    long int no,fact;
    printf("\nenter a number . . .");
    scanf("%ld", &no);
    fact=factorial(no);
    printf("\nThe factorial of the give number is : %ld", fact);
    getch();
}
long int factorial(long int n)
{
    int i;
    long int fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
