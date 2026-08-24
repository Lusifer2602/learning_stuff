#include<stdio.h>
int main() {
    // learning how to work with arrays today
    /* ok so first thing we are learning here is that
        if you want to store multiple integer values within one variable to avoid crowding and confusion of variable names
        then you can just do this
    */
   int sampleint[5]={12, 45, 76, 83, 74}; /* a question that came to my mind when i was doing this
                                     1. yes you can leave the array {} empty even if you have defined its length
                                     2. no you cannot add more elements than the defined length
                                     3. yes you can leave [] empty if you are immediately entering the elements in it
                                        (you can't declare it as array[] and define no values at all) */

     // to access the elements in the array you can use this
    printf("%d %d %d\n", sampleint[0], sampleint[2], sampleint[4]);

    // to store a new variable as  one of the elements of array you can just
    int hi=sampleint[2];
    int nums[5] = {1,2,3,4,5};
    nums[0]=100, nums[4]=500;
    printf("%d %d %d %d %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);

    // now learning to manually take input for an undefined array and then gives the entire array as output
    int samplearray[5];
    printf("Enter elements of array down here separated with space (don't enter comma to separate them :\n");
    scanf("%d %d %d %d %d", &samplearray[0], &samplearray[1], &samplearray[2], &samplearray[3], &samplearray[4]); //this one takes input for it
    //this one prints it 
    printf("%d %d %d %d %d\n", samplearray[0], samplearray[1], samplearray[2], samplearray[3], samplearray[4]);

    int arr[3]={54, 72, 68};
    printf("%d\n", arr); //here arr  means same as &arr[0] because it literally just means it is pointing in the direction of memory address of the array's first index
    // and trying to use it to print the entire array will only print its current memory address not the array itself

    printf("Highest marks here are : %d\n", sampleint[3]);

return 0;

}