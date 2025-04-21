#include <stdio.h>
int main(){
    int asshole; //declared the var asshole
    printf("One of the greatest thing about C is you are able to declare variables without assigning a value to them.\n");
    asshole=123; //assigned valye to the variable later! ain't that crazy!?!?
    printf("The integer assigned is : %d\n", asshole);

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


    return 0;
}
