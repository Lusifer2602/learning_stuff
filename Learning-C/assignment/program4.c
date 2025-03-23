# include <stdio.h>
# include <conio.h>
void main()
{
    long int n, i=1, sum=0, r;
    printf("\nEnter the Decimal Number : ");
    scanf("%ld", &n);
    while(n>0)

    {
        r=n%2;
        sum=sum+(r*i);
        i=i*10;
        n=n/2;
    }
printf("\nEquivalent binary number is %ld", sum);
getch();
}
