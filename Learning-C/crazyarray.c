#include<stdio.h>
int main(){
    int arr[5];
    printf("\n");

    for(int i=0; i<5; i++) {
        printf("Enter the integer to store at index %d of array : ", i);
        scanf("%d", &arr[i]);

        if(i==4){
            printf("\nThis is the array\n");
            for(int j=0; j<5; j++){
                if(j==4){
                    printf("%d\n", arr[4]);
                    break;
                }
                printf("%d, ", arr[j]);
            }        }
    }
 printf("\n");
return 0;
}