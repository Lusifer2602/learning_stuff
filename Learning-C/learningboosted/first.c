//we will try to learn as much as we can because exam sar pe hai and failing or scoring less in a programming exam is the last thing any of us wants lol
//this is a simple program written to calculate have/are you turned/turning this (2025)

#include<stdio.h>
int main(){
    int birth_year, year=2025;
    printf("How old are you man?\nNevermind just tell me your birth year I will figure it out\n");
    scanf("%d", &birth_year);
    printf("Ohh so you are %d years old, got it thanks", year - birth_year);
    // ok now lets try this on our own kyuki upar wala AI se correct karwa ke likha h

//ok now we will create another program that asks what year we were born in and then tell in what year we'd turn a 100 years old
int birth_year;
printf("Please tell what year were you born in?\n");
scanf("%d", &birth_year);

int age=2025-birth_year;
printf("Ok so you're %d years old this year and \nwill be turning 100 in the year %d\n.", age, 2025+(100-age));

    return 0;
}
