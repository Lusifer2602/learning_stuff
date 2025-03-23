#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,ch;
    printf("\nEnter two values :");
    scanf("%d%d", &a, &b);
    printf("\nEnter the choice:\n1.Addition\n2.Suntraction\n3.Multiplaction\n4.Division\n5.Modulo\nchoice: ");
    scanf("%d", &ch);
    switch(ch)
{
    case 1: printf("\nAddition of %d+%d is %d", a, b, a+b);
    break;
    case 2:printf("\nSubtraction of %d-%d is %d", a, b, a-b);
    break;
    case 3:printf("\nMultiplication of %d*%d is %d", a, b, a*b);
    break;
    case 4:if(b==0)
    printf("\nDivisionis not possible");
    else
    printf("\nDivision of %d/%d is %f", a, b,(float)a/b);
    break;
    case 5:printf("\nModulus of %d%%d is %d", a, b, a%b);
    break;
    default: printf("\nEnter correct choice:");
    break;
}
getch();
}
