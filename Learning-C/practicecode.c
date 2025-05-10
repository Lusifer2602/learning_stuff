#include<stdio.h>
int main(){
//ok we have a problem where we want to print numbers 1 to 50 that are divisible by both 3 and 5
//then problem 2 : print numbers 1 to 30 that are divisible by 3 or 7
//problem 3 :  print numbers 1 to 20 that are not divisible by 2 (use ! operator)
//problem 4 : Count how many numbers between 1 to n are divisible by 2 but not by 4

int i, j, k=0; //one extra var for safety lol
//Prolem 4 (3 na kari ghani easy hai)
printf("Enter the limit till where you want to see how many numbers are divisible by 2 but not by 4 : ");
scanf("%d", &j);
for(i=1;i<=j;i++){
    if(i%2==0&&i%4!=0){
        printf("%d ", i);
        k++;
    }
}
    printf("are the values divisible by 2 but not by 4."
            "\nAnd there's total %d of them.\n", k++);
 
return 0;
}
