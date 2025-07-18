//while loops
//print even nums till 10
// print nums in reverse
// count num of digits in an intger
// print a num in reverse order
// check palindrome
//
#include<stdio.h>

int main(){
    int rem, num, a=0;
    printf("Enter the num you want to see if is a palindrome : ");
    scanf("%d", &num);

    int save=num;
    if(num<0){printf("This number is negative hence can't be a palindrome sir\n");}

        else{while(num!=0){
            rem=num%10;
            a=(a*10)+rem;
            num/=10;
        }
        :x
            printf("Yes the number is a palindrome\n");}
        else {printf("No you stupid fuck it isn't no palindrome\n");}}
            
       
       return 0;
}
