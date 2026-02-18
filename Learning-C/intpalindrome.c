#include<stdio.h>
int main(){
int number, original, rem, i=0;
        printf("Enter the number you want to check palindrome on : ");
        scanf("%d", &number); original=number;

        while(number>0){
            rem=number%10;
            number/=10;
            i=i*10+rem;
        }

        printf("\nReverse of %d is : %d\n", original, i);
        if(original==i){printf("Hence,\nYES %d is a palindrome\n", original);}
        else{printf("Hence, no %d is not a palindrome\n", original);}

return 0;
}
