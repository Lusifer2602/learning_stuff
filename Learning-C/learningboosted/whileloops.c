#include<stdio.h>
int main(){
    int num=123, sum=0, rem;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem;}
    printf("%d \n", sum);

return 0;
}
