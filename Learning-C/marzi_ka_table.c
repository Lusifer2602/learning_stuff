#include<stdio.h>
int main(){
    int num, i;
    printf("Enter the number you want to write table of : ");
    scanf("%d",&num);
    printf("Here's a multiplication table of %d\n",num);
    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, i*num);
    }
    return 0;
}
