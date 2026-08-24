#include<stdio.h> //learning looping through array
int main(){
    /*int arr[]={123, 456, 789, 1011, 1213, 1415, 1617},
        len=sizeof(arr)/sizeof(arr[0]);
    //now we shall loop through this array and print its each element
    for(int i=0;i<len;i++){
        printf("Element %d is %d\n", i+1, arr[i]);
    }
    printf("Total number of elements are : %d", len);
*/
//A practical example to use sizeof and looping through arrays; a program to calc avg of different ages

int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
int i, sum=0, len=sizeof(ages)/sizeof(ages[0]);
float avg;
printf("Total ages in the array are : %d\n", sizeof(ages)/sizeof(ages[0]));
printf("Sum of ages is : ");
for(i=0;i<len;i++){
    sum+=ages[i];
}
printf("Average of the ages is : %d\n", sum);
//NOW LET US FIND OUT THE SMALLEST VALUE OF THE AGES
printf("\nNow let us find the lowest value in the array\n");

int minage=ages[0];
for(i=0; i<len; i++){
    if(minage>ages[i]){
        minage=ages[i];

}}   printf("    The lowest age in the array is %d", minage);

int maxage=ages[0]; //first position is assumed to be the max. in the array wtr to which we calculate the rest ages
for(i=0;i<len;i++){
    if(maxage<ages[i]){ //mtlb jis age pe iterate ho rha h wo assumed age se chhoti h to new age will be the biggest
        maxage=ages[i];
    }
}
printf("\n    The maximum age in the array is %d", maxage);

return 0;
}