#include<stdio.h>
#include<conio.h>
void fib(int);
void main()
{
    int n;
    printf("\nEnter the limit:"); scanf("%dd", &n);
    fib(n);
    getch();
}
void fib(int n)
{
    int i, a=0, b=1, c;
    printf("\nFibonacci series are:");
    printf("\n\n%d\t%d", a, b);
    for(i=3;i<=n;i++)
{
c=a+b; a=b; b=c;
printf("\t%d", c);
}
}