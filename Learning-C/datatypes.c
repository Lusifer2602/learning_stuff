// Data Types
/* we already know about main data types;
 * lets just get done with the main ones and move ahead
 int(%d), float(%f), character(%c)
 now lets see a new one being used
 double(%lf) - stores float value for decimals up to 15 places
 string(%s) - stores strings(ye wala  baad mein karenge)*/
#include<stdio.h>
int main(){
    float ass=12.3;
    double jugs=21.3121312;
    
    printf("Float value : %f\nThis one's a double value%lf", ass, jugs);
//the only difference between double and float is that it is responsible for double can hold a longer decimal value than float.
    
    /*now lets see some decimal precision
 we use this to remove extra zeros we might see in the end of a decimal number that might need for  better presentation of the output*/
    printf("%f\n", ass); //normal output
    printf("%.1f\n", ass); //only one decimal place shown
    printf("%.2f\n", ass); //FOR 2 decimal places output
    printf("%.3f\n", ass); //3 decimal places
return 0;
}
