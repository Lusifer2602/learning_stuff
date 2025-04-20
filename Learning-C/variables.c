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

}
