#include<stdio.h>
int main(){
    int a;
    printf("Enter a number and we'll see if that shit is +ve, -ve or 0");
    scanf("%d", &a);
    
    if (a<0){
    printf("The number is a negative number.\n");
    }
    
    else if(a>0){
    printf("The number is a positive value.\n");
    }

    else{
    printf("The number is 0 value.\n");
    }

    return 0;
}
    
