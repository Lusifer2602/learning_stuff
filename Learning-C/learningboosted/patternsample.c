//started this to know nested for loops and how to use them to show patterns
#include<stdio.h>
int main(){
int i, j;
for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n"); // Move to the next line after inner loop finishes
}
return 0;
}
