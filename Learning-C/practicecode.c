#include<stdio.h>
int main(){
//lets find sum of n even natural numbers
int i, sq, num;
printf("Enter the number till where you want to find squares of : ");
scanf("%d", &num);
for(i=1; i<=num; i++){
    sq=i*i;
    printf("%d x %d = %d\n", i, i, sq);
}

    return 0;
}
