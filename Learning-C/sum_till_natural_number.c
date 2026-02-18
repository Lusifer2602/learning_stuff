#include<stdio.h>
int main(){
    int a, sum=0, i;
    printf("Enter the number till where you want to find sum of the natural numbers: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
    sum=sum+i;}
    printf("Sum of all natural numbers till %d is : %d\n", a, sum);

    return 0;
}

