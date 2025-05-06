#include<stdio.h>
int main() {
    int i, num, factorial=1;
    printf("Enter the number you want to find factorial of : ");
    scanf("%d", &num);//take input from user aboout what number to find fact. of

    for(i=num; i>=1; i--){ //we can also do this by incrementing i from 1 to the given input, abhi karte hain rukk
       factorial=factorial*i;
    if (num<0){printf("negative integers are not defined for factorial");}
    }
    printf("The factorial of the following number is : %d\n", factorial);
    return 0;
}
//halat kharab hogyi but did it by comparing with the sum of natural numbers till the given number jaisa algo apply kar k

