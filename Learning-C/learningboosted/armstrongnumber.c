#include<stdio.h>
int main(){
    int sum=0, a, i, pow;
    printf("Enter the number to check Armstrong number on : ");
    scanf("%d", &a);
    int original=a;

    while(a>0){
        i=a%10;
        pow=i*i*i;
        sum+=pow;
        a/=10; //we need to remove the last digit of the number to go back to second last and continue to loop or it'll run forever
    }

if(sum==original){
    printf("Yes %d is an Armstrong Number\n", sum);}
else{
    printf("No %d is not an Armstrong numer\n", original);}

return 0;
}
