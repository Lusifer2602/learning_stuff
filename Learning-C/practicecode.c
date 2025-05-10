#include<stdio.h>
int main(){
    //factorial bana ke dekhte hain
    int i, num, factorial=1;
    printf("Enter the number to find factorial of : ");
    scanf("%d", &num);
    
    for(i=num;i>=1;i--){
        factorial=factorial*i;
    }
    printf("Factorial of the following number is : %d\n", factorial);
    return 0;
}
