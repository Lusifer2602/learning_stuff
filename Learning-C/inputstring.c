#include<stdio.h>
int main(){
    //I am gonna try run a program that takes a user input and gives an output whatever the way my brain wants to take it
    char name[10], sname[20], mname[10];
    printf("Enter a name : "); scanf("%s", name);
    printf("Enter your middle name (leave Blank if None) : "); scanf("%s", mname);
    printf("Enter your Last Name : "); scanf("%s", sname);

    printf("Hii, %s %s %s\n Its absolutely lovely to meet you\n.", name, mname, sname);

return 0;
}
