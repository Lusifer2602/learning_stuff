<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <conio.h>

// Function prototype for swap
void swap(int *a, int *b);

// Function prototype for factorial
long int fact(int n);

int main() {
    int x, y, n;
    long res;

    // Swapping program
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n\n", x, y);

    // Factorial program
    printf("\nEnter a number to find factorial: ");
    scanf("%d", &n);
    res = fact(n);
    printf("\nFactorial of %d = %ld\n", n, res);

    getch();
    return 0;
}

// Swap function (Call by Reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Factorial function (Recursion)
long int fact(int n) {
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
>>>>>>> origin/main
