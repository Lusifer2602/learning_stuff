#include<stdio.h>
int main() {
    // int sample[]={10, 12, 15, 20, 27, 28, 30, 33, 36, 38, 39, 40};
    int sample0[]={2, 3, 4, 6, 5, 9, 12, 15, 17, 18, 21}; long int a=12345678;
    printf("Size of var a is = %ld\n", sizeof(a)); //the sizeof is an operator that calculated the size a variable takes in the memory space, 4bytes for each int/char in the stored var

    //the <sizeof> operator for an array with 5 integers of 4 bytes each element will return 20

    int avg=sizeof(sample0)/sizeof(sample0[0]); /*divide size of array by the size of first element of the array
                                                >>>this is the formula to find length of an array */
    // char lol[]={'I', 'am', 'batman', '.'};
char lol[]={"I AM BATMAN"};
    int size=sizeof(lol)/sizeof(lol[0]);
    printf("\n Size of array named lol is :", size);
    

// char sample[2][10]={"I", "am", "batman."};
size=sizeof(lol)/sizeof(lol[0]);
int sample[]={12, 32, 43, 433};

printf("Size of sample array is: %zu", sizeof(sample) );
return 0;
}