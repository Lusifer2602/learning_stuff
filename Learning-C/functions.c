#include<stdio.h>
//functions calling other functions
//even odd checking using functino in function method

/* Triangle Utility Design (Modular & Functional)
Main Menu

Ask the user:

1 to find hypotenuse

2 to find perpendicular side

Functions you'll need:

float findHypotenuse(float base, float height);

float findPerpendicular(float hypotenuse, float base);

Inside the main()

Take user input for choice

Then prompt for required values based on that

Call appropriate function and print result with 2 decimal precision*/

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
