#include <stdio.h>
#include <math.h>
// #include <conio.h>

int main()
{
    int p, n, ch;
    float r;
    printf("\nEnter the choice:\n1. Simple interest\n2. Compound interest\nChoice: ");
    scanf("%d", &ch);

    printf("\nEnter the value of amount (principal), number of years, and rate of interest:");
    scanf("%d %d %f", &p, &n, &r);
switch(ch) 
        {
        case 1:
            printf("\nThe simple interest is = %f", (p * n * r) / 100);
            break;
        
        case 2:
            printf("\nThe compound interest is = %f", (p * pow((1 + (r / 100)), n) - p));
            break;
            default:
            printf("\nEnter the correct choice.\n");
        }

    return 0;
}
