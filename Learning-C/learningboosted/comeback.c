//while loops
//print even nums till 10
// print nums in reverse
// count num of digits in an intger
// print a num in reverse order
// check palindrome
// check armstrong number
//
#include<stdio.h>
#include<math.h>

int main(){
    //armstrong number's digits' cube add up to make the same number
    //so we first take out last digits as remainders till the remainder is 0 and then also remove last digit from the initial number, lets get to it
    long int rem, num,sum;
    printf("Alright lets check if your input is an armstrong number\n");
    printf("Enter the digit : ");
    scanf("%ld", &num);
    long int original=num, count=0;
    sum=0;
    // ok we count the number of digits in the value here to raise its digits to that power
    while(num>0){
        num/=10;
        count+=1;
    }
    printf("%ld has %d digits in it\n", num, count); // here we tell the user the number of digits in their input
    
    num=original;
    while(num>0){ //here we start the exponentiation
        rem=num%10;
        num/=10;
        sum+=pow(rem, count);
        }

    printf("Sum of its digits according to armsotrong is : %ld\n", sum);

    if(original==sum){printf("Hence, \n yes Armstrong number verified!!!\n");}
    else{printf("No it is not an armstrong number\n");}
       
       return 0;
}
