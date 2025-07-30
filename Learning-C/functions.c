#include<stdio.h>
//functions calling other functions
//even odd checking using functino in function method

int isEven(int a){
    return a%2;
}
int isOdd(int a){
    return a%3;
}

void check(int a){
    int bin=isEven(a);
    if(bin==0){
        printf("1\n");}
    else{
        printf("0\n");}
}


int main(){
    int n;
    printf("Enter the number you want to see is even or odd : ");
    scanf("%d", &n);
    check(n);

return 0;
}
