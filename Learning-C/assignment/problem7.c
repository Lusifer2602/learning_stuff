//2D Array

#include <stdio.h>
void main()
{
    int arr[5][5], i, j, row, col;
    printf("\n Enter the no. of rows and columns");
    scanf("%d %d", &row, &col); //scanf is used for reading out the values taken as user input
    printf("\nEnter the elements of 2D Array.");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
        scanf("%d", &arr[i][j]);
    }
    }
    printf("\nThe elements of 20 array");
    
    for(i=0; i<row; i++)
    {
    for(j=0; j<col; j++)
        {
        printf("\t %d", arr[i][j]);
        }
        printf("\n");
        
    }
}