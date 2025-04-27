#include <stdio.h>
int main() {
        //ek sath saare examples lete hain bc ab
        int abdul=786, bishamber_lal=1008;
printf("We have taken the integers as\n abdul=786, bishamber_lal=1008");
printf("abdul + bishamber_lal = %d\n", abdul+bishamber_lal);
printf("abdul - bishamber_lal = %d\n", abdul-bishamber_lal);
printf("abdul * bishamber_lal = %d\n", abdul*bishamber_lal);
printf("abdul / bishamber_lal = %d\n", abdul/bishamber_lal);
printf("abdul %% bishamber_lal = %d\n", abdul%bishamber_lal);
printf("+abdul = %d\n", +abdul);
printf("-abdul = %d\n", -abdul);
printf("abdul++ = %d\n", abdul++);
printf("abdul-- = %d\n", abdul--); //arithmetic operators in C completed here
printf("\n");
//starting with Relational Operators
printf("abdul < bishamber_lal : %d\n", abdul<bishamber_lal);
printf("abdul > bishamber_lal : %d\n", abdul>bishamber_lal);
printf("abdul <= bishamber_lal : %d\n", abdul<=bishamber_lal);
printf("abdul >= bishamber_lal : %d\n", abdul>=bishamber_lal);
printf("abdul == bishamber_lal : %d\n", abdul ==bishamber_lal);
printf("abdul != bishamber_lal: %d\n", abdul!=bishamber_lal);
//these relational operators will give 0 for false and 1 for true
printf("\n");

//LOGICAL OPERATORS
 // using operators and printing results
    printf("abdul && bishamber_lal : %d\n", abdul && bishamber_lal);
    printf("abdul || bishamber_lal : %d\n", abdul || bishamber_lal);
    printf("!abdul: %d\n", !abdul);
int zero=0; 
//here the compiler checks if the program has any non zero values that it can return False(0) for and if there's not then it gives true(1) as output depending on the Logical Operator being used
printf("\n");
printf("adbul OR zero : %d\n", abdul||zero);
printf("abdul AND zero : %d\n", abdul&&zero);
printf("!bishamber_lal : %d\n", !bishamber_lal);
printf("\n");

//bitwise operators (watch some YT to understand how exactly they work on fundamental level ya ChatGPT karle smjhne ke liye)
//fuckit alag se file bana ke karte hain kaam in pe

return 0;
}
