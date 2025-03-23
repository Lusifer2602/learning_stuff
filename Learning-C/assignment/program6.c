#include<stdio.h>
#include<conio.h>
void main ()
{
int n,i,j;
// clrscr () ;
printf("\nEnter the limit:");
scanf("%d", &n);
for(i=1;i <= n;i++)
{
for(j=2;j<i;j++)
{
if(i%j == 0)
break;
}
if(i == j)
printf("\n%d",i);
}
getch ();
}