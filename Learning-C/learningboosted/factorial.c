#include<stdio.h>
int main() {
    int num, factorial=1;
    long long int i; //this int data type can store 8 bytes of of data and represented using %lld.
                     //there's also long int that can store 4 or 8 bytes represented using %ld.
    printf("Enter the number you want to find factorial of : ");
    scanf("%d", &num);//take input from user aboout what number to find fact. of

if(num<0){
    printf("Negative integers can't have factorial");
}
else if(num==0){
    printf("The factorial of the following number is : 1\n");
}


    for(i=num; i>=1; i--){ //we can also do this by incrementing i from 1 to the given input, abhi karte hain rukk 
        factorial=factorial*i;
        }
        printf("The factorial of the following number is : %d\n", factorial);

    return 0;
}
//halat kharab hogyi but did it by comparing with the sum of natural numbers till the given number jaisa algo apply kar k
