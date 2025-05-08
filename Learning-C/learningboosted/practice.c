#include<stdio.h>
int main() {
    int i, bc;
    for(i=5;i>=1;i--){
        for(bc=i; bc>=1; bc--){
             printf("%d ", bc);
            }
    printf("\n");
    }

printf("OK WE START ANOTHER ONE HERE ON\n");
    
    for(i=1;i<=5;i++){
        for(bc=1;bc<=i;bc++){
               printf("%d ", bc);
        }
        printf("\n");
    }

printf("OK WE START ANOTHER ONE HERE ON\n");

    int outer, inner;
    for(outer=5; outer>=1; outer--){
        for(inner=1;inner<=outer; inner++){
            printf("%d ",inner);        
        }
    printf("\n");
    }

printf("OK WE START ANOTHER ONE HERE ON\n");

    
return 0;
}

