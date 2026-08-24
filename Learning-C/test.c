#include<stdio.h>
int main(){
    //let us find out the largest and the smallest integer value from a  random array
    int hehe[]={91, 42, 32, 73, 23, 51, 68, 62, 42, 43, 82, 76, 82, 54, 36, 72, 58},
    len=sizeof(hehe)/sizeof(hehe[0]), i;
    printf("There are <%d> elements in the array.\n", len);

    int min=hehe[0];
    //now let us find the smallest number in the array
    for(i=0; i<len; i++){
        if(min>hehe[i]){
            min=hehe[i];
        }
    }   printf("The minimum value in the array is -> %d\n", min);

    int max=hehe[0];
    //now let us find out the biggest value in the array
    for(i=0; i<len; i++){
        if(max<hehe[i]){
            max=hehe[i];
        }
    }   printf("The maximum value in the array is %d\n", max);

    //now let us create a program to see if a certain value exists in the array
        //here we see if 0 exists in the array below (we also threw in a few negative numbers to make it harder to deal with)
    int lol[]={-13, -5, 91, 42, 32, -54, -95, 73, 23, 51, 68, 62, 42, 43, 82, 76, 82, 54, 36, 72, 58, 0},
        length=sizeof(lol)/sizeof(lol[0]);
    printf("\nThere are <%d> elements in the array.\n", length);
    
    for(i=0; i<length; i++){
        if(lol[i]==0){break;}   
        
        else {continue;}
    }

    if(lol[i]==0) {printf("0 found in the array");}
    else{printf("0 not found in the array");}

return 0;
}