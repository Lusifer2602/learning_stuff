#include<stdio.h>
//learning usage of scanf and gets

int main() {
    char str[20]; int num;
    printf("Enter your name : ");
    scanf("%s", str);
    
    printf("Enter your age : ");
    scanf("%d", &num);

    return 0;
}
