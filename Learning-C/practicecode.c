#include<stdio.h>
int main(){
//lets find sum of n even natural numbers
int i, newnum, sum=0, num;
printf("Enter the number till where you want to find some of even numbers :  ");
scanf("%d", &num);

if(num%2!=0){
    newnum=num-1;
}

else{printf("Invalid Input! Please add a valid natural number");}

    for(i=newnum;i>=2;i-=2){
        sum=sum+i;
    }
    printf("The sum of all natural even number from 2 to %d is : %d\n", num, sum);


    return 0;
}
