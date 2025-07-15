//while loops
//print even numbers till 10
// print numbers in reverse
// count number of digits in an intger
//
#include<stdio.h>

int main(){
    int count=0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    if(n==0){
        count=1;}
    else if(n<0){
        n=-n;
        while(n>0){
        count++;
        n/=10;}
    }
    else {while(n>0){
        count++;
        n/=10;}}
    printf("%d\n", count);
    
       return 0;
}
