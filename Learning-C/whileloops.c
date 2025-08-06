#include<stdio.h>
int main(){
    //reversing a number using while loop
    int rem, sum=0, num=9645, reversed;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num/=10;
   }
    printf("%d \n", sum);

return 0;
}
