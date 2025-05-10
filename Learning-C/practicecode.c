#include<stdio.h>
int main(){
//ok we now have a problem where we try to print all the values that are divisible by 2 not by 4
// AND we also have to add them to find out their sum.
int i, j, k=0, sum=0, l; //one extra var for safety lol
//Prolem 4 (3 na kari ghani easy hai)
printf("Enter the limit till where you want to see how many numbers are divisible by 2 but not by 4 : ");
scanf("%d", &j);

for(i=1;i<=j;i++){
    if(i%2==0&&i%4!=0){
        printf("%d ", i);
        k++;
        sum+=i;
    }
}
    printf("are the values divisible by 2 but not by 4."
            "\nAnd there's total %d of them.\n", k++);
    printf("Sum of all these values is : %d\n", sum);
            
 
return 0;
}
