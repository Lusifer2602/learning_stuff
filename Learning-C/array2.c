#include<stdio.h>
//looping through an array
int main(){
    int inventory[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {50, 60, 70, 80}
    };

    int i, j;
    for(i=0; i<3; i++){//max columns in the arr
        for(j=0; j<4; j++){ //max rows in the arr
            printf("Position %d x %d is : %d\n", i, j, inventory[i][j]);
        }
    }
    
return 0;
}