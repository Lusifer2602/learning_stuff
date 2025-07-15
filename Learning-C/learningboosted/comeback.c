//while loops
//print even nums till 10
// print nums in reverse
// count num of digits in an intger
// print a num in reverse order
//
#include<stdio.h>

int main(){
    int rem, num, a=0;
    printf("Enter the num you want to reverse : ");
    scanf("%d", &num);
    if(num==0){
        printf("You stupid fuck thats 0, reverse it and it is still the same\n");
    }
    else{
        while(num!=0){
            rem=num%10;
            a=(a*10)+rem;
            num/=10;
        }
        printf("%d\n", a);
    }
            
       
       return 0;
}
