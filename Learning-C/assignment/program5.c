#include<stdio.h>
void main ()
{
int arr[10],i,n, sum=0;
printf("\n enter the number of elements in the array : ");
// reading the size of the array
scanf("%d",&n);
// reading the elements of the array
printf("\n enter the values for the elements of the array : ");
for(i=0;i<n;i++)
{
printf("\n Enter the element %d : ",i+1);
scanf ("%d",&arr[i]);
}
// finding the sum of the elements of the array
for(i=0;i<n;i++)
sum=sum+arr[i];

// printing the elements of the array
printf ("\n Printing the sum array elements ..... ");
printf("\n The value for the sum of elements of the array : ");
for(i=0;i<n;i++)
printf("\n the element %d : %d",i+1,arr[i]);
printf ("\n printing the array sum ..... ");
printf ("%d ",sum);
}