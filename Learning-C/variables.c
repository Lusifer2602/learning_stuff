#include <stdio.h>
int main(){
    int asshole; //declared the var asshole
    printf("One of the greatest thing about C is you are able to declare variables without assigning a value to them.\n");
    asshole=123; //assigned valye to the variable later! ain't that crazy!?!?
    printf("The integer assigned is : %d\n", asshole);

    
    //lets start something here now; the date's 21st April
    asshole=653;
    printf("The latest value to the variable asshole is %d\n", asshole);

//declaring multiple variables and performing operations on them
int abba=45, dabba=87, jhabba=23, shushu=abba+dabba*jhabba;
printf("%d\n", shushu);
printf("%d\n", abba*dabba-jhabba);

    return 0;



//ok lets create some shit that involves all learnt about variables
/*
Baba Mastnath ki details pe ek program banate hain
bmu name
city
college rating i give
rating to students i 'd give
average age of students
 */ 
char bmuname[]="Baba Mastnath Univeristy";
float bmurating=4.3;
int avgage=20;
char bmuclass='d';
int my_year=1;

printf("The Name is %s\n", bmuname);
printf("I'd rate BMU %f/10\n", bmurating);
printf("Average age that I observed in this is : %d\n", avgage);
printf("%lf\n", 231.121111);
printf("%f\n", 21.2123121);
// different data types consume different storage in the memory
// int takes 2-4 bytes
// float takes 4 bytes
// double takes 8 bytes
// char takes 1 byte

    return 0;

}
