#include<stdio.h>

int main(){
    int boss=123; //%d for int
    printf("This is a value with int format : %d\n", boss);

    float demn=23.23; //%f for float values
    printf("This is a float format value : %f\n", demn);

    char brinjal='1';
    printf("%c is a char format value that'll contain only a single character.\n", brinjal);

    printf("We can aslo print values individually without declaring them for eg \n This is an int %d\nWhile this is a float value %f\n And this is a char %c", 12, 3321.43, 's');
    
    printf("\nAND WE DID THIS ONE WITHOUT DECLARING ANY VARIABLE\n PS : we cam also mix it up like %f %c %d\n", demn, brinjal, 765);

    int boston;
    boston=21;
    printf("Here we can see that we can also declare variables without giving them a particular value and then specify  in a statement later \n  the declared var is : %d\n", boston);
    
    //changing variable values
    // we had used int boston previously and we can change the same var's value by redefining it here
    boston=432;
    printf("The new value assigned to the same variable is : %d", boston);

//working on a new branch on asus pc and pushing it to origin so we don't have to face divergence in branches the next time 

return 0;
}