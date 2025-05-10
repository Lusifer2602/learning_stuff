#include<stdio.h>
int main(){
//lets find sum of n even natural numbers
int i, square, num, rows;
printf("Enter the number till where you want to find squares of : ");
scanf("%d", &num);
for(i=1; i<=num; i++){
    printf("%d x %d = %d\n", i, i, i*i);
}

    return 0;
}
