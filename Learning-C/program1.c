#include <stdio.h>
#include <math.h>

int main() {
    int p, n, ch;
    float r;
    printf("\nEnter the choice:\n1. Simple interest\n2. Compound interest\nChoice: ");
    scanf("%d", &ch); // Corrected the scanf format string and removed the comma

    printf("\nEnter the value of amount (principal), number of years, and rate of interest: ");
    scanf("%d %d %f", &p, &n, &r); // Added spaces between format specifiers

    switch(ch) {
        case 1: // Added space between 'case' and '1'
            printf("\nThe simple interest is = %.2f\n", (p * n * r) / 100);
            break;
        case 2: // Added space between 'case' and '2'
            printf("\nThe compound interest is = %.2f\n", p * pow((1 + (r / 100)), n) - p);
            break;
        default:
            printf("\nInvalid choice.\n");
    }

    return 0; // Changed 'void main()' to 'int main()' and added 'return 0;'
}
