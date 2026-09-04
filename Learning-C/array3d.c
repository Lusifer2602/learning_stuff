#include<stdio.h>
int main(){
    //Here we are going to see how 3d arrays work
    int arr[2][3][3]={
        {
            {10, 20, 30},
            {11, 21, 31},
            {51, 31, 51}
        }, //1st block
        {
            {40, 50, 60},
            {41, 51, 61},
            {42, 52, 62}
        }
    };
//how 3d arrays work is you give create 3 sq. bracket blocks
/*  1st block gives us the number of matrices to be create
    2nd and 3rd blocks give np. of rows and columns in each of those matrices*/

//let's try to print the elements of a 3d array
int i, j, k;
for(i=0; i<2; i++){ //decides the array's first index
    printf("\nMatrix %d below :\n", i+1);
    printf("R x C \n");
    for(j=0; j<3;j++){ //decides array's second index i.e. Row of the selected array
        for(k=0; k<3; k++){ //decides array's 3rd index, i.e. Columnm of array being used
            printf("%d x %d = %d\n", j, k, arr[i][j][k]);
        }
    }
}

return 0;
}