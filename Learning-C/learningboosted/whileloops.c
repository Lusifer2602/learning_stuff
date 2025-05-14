#include<stdio.h>
int main(){
    int num=123, sum, rem; // this is a program to find sum of all the integers in a given natural number
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem;}
    printf("%d ", sum);
    
    //next we will write a program  to reverse the numbers of an integer
   int remainder, number=321;
    while(number>0){
        remainder=number%10;
        number=number/10;
        printf("%d", remainder);}
    printf("\n");

    return 0;
}
