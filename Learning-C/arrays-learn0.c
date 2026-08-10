//so far we learnt to take inputs for arrays
/*and to
access items, print items, edit items
we also learnt that direcrlt printing an array using %d in printf will print the 0 position's memory address not the element/s itself if the array is unnamed*/

#include<stdio.h>
int main(){
    //printing arrays using for loop
    int i;
    for(i=1; i<=5; i++){ //this is syntax for a basic loop
        printf("%d, ", i);
    }

    //taking input into using for loop in arrays
    int random[5];
    for(i=0; i<5; i++){
        printf("Enter number : ");
        scanf("%d", &random[i]);
    }
    
    //and below we print the array using
   printf("The saved array is : ");
    for(int j=0; j<5; j++){
        printf("%d ", random[j]);
    }
// Here we learnt to enter input into an array without using multiple scanf statements
return 0;
}