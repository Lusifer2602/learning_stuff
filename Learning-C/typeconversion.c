#include<stdio.h>
//We are going to perform type conversion now
int main (){
    int x=23;
    int y=5;
    int z=76;

printf("x int is : %d\n", x);
//conversion happens implicit and explicit

//implicit conversion happen in situations like these
// printf("Printing int y as float %f\n", y); //this is an error statement that gives error in the name of type conversion and i hope you let w3school know about it or maybe I am just dumn lol

float sum=312+3213;
printf("This is the float sum of int 312 and 3213 : %f\n", sum);
//one thing i can see is that implicit conversion doesn't work by default in my c compiler so anyways nevermind lets get further down this rabbit hole of how type conversion work in c

//EXPLICIT CONVERSION
float man= (float) 5/2; // this is to show that we can place type in front of a variable
printf("This is where we manually converted 5/2 as %f\n", man);
//since we learnt about decimal precision we can also use it to make the output look nicer like :
printf("This is the value of the var 'man' after precised type conversion : %.2f\n", man);


//ANOTHER IMPORTANT CONCEPT THAT DOESN'T NEED A NEW FILE TO BE STORED IN
const int alpha=12; //this is now a rock solid variable assigned with the value of 12 and nothing is going to change it throughout the entire code no matter what we do
// alpha=123; //this will either throw an error or the output will stil be 12
// and as expected this threw an error at our faces lol
printf("Constant alpha has the value : %d\n", alpha);

//one more thing was that we cannot define an empty constant's value later in the code, i hope you don't need to see an example for that

return 0;
}
