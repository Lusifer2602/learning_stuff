#include<stdio.h>
int main() {
    int remainder, quotient, number, i, count=0;
    printf("Enter the integer that you want to count digits of : ");
    scanf("%d", &i);
    number=i;
    while(i>0){
        remainder=i%10;
        i/=10;
        count+=1;
    }
    printf("Total digits in %d are : %d\n", number, count);

return 0;
}

