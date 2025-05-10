#include<stdio.h>
int main(){
//ok we have a problem where we want to print numbers 1 to 50 that are divisible by both 3 and 5
//then problem 2 : print numbers 1 to 30 that are divisible by 3 or 7
//problem 3 :  print numbers 1 to 20 that are not divisible by 2 (use ! operator)
//problem 4 : Count how many numbers between 1 to n are divisible by 2 but not by 4

int i, j, k; //one extra var for safety lol
//Prolem 2
printf("The following numbers from 1-50 are divisible by 3 or 7 : ");
for(i=1;i<=50;i++){

if(i%3==0 || i%7==0){printf("%d, ", i);}
}
printf("\n");
 
return 0;
}
