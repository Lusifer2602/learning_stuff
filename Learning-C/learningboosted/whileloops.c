#include<stdio.h>
int main(){
    int num=123, sum=0, rem; // this is a program to find sum of all the integers in a given natural number
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem;}
    printf("sum of digits of 123 is : ");
    printf("%d \n", sum);
    
    //next we will write a program  to reverse the numbers of an integer
    printf("321 reversed is: ");
   int remainder, number=321;
    while(number>0){
        remainder=number%10;
        number=number/10;
        printf("%d", remainder);}
    printf("\n");


    return 0;
}
