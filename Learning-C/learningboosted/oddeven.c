//program to check if a number is odd or even
#include<stdio.h>
int main() {
    int a;
    printf("Ek number daal bhai fir dekhte hain even hai ya odd : ");
    scanf("%d", &a);

    if (a%2!=0){
        printf("The following number is ODD.\n");
    }
    else {
        printf("The following number is EVEN.\n");
        }
    return 0;
}
