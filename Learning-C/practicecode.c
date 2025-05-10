#include<stdio.h>
int main(){
//lets find sum of n natural numbers
int i, sum=0, num;
printf("enter the number to find sum of : ");
scanf("%d", &num);

for(i=num;i>=1;i--){
sum+=i;
}
printf("The sum of the following natural number is : %d\n", sum);


    return 0;
}
