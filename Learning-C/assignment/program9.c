/*AIM to write a C program to swpa two numbers using functions by ;
a) Pass by Value
b)Pass by reference */

#include<stdio.h>
#include<conio.h>

void swap1(int*, int*);
void swap(int, int);
void main()
{
    int a, b;
    printf("Enter two number : ");
    scanf("%d%d", &a, &b);
    printf("\nCALL BY VALUE\n");
    printf("\nBefore swapping\n\n a=%d and b=%d", a, b);
    swap(a, b);
    printf("\nAfter swapping\n\n a=%d and b=%d", a,b);
    printf("\nCALL BY REFERENCE");
    printf("\nBefore swapping\n\n a=d and b=%d", a, b);
    getch();
}
void swap (int a, int b)
{
int t;
t=a; a=b;
b=t;
}
void swap1(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}