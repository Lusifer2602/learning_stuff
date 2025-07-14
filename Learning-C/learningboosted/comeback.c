//for loops
//tables completed
//patterns completed, 1-10 * and 10-1
//print even numbers from 1 to 10
// print numbers 1 to 50 divisible both by 3 and 5
#include<stdio.h>
int main(){
 int a,num;
 for(a=1;a<=50;a++){
     if(a%3==0 && a%5==0){
         printf("%d ", a);
     }
     else{continue;}
 }printf("\n ");
   return 0;
}
