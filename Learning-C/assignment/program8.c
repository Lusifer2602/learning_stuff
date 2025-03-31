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
