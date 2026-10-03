#include<stdio.h>
#include<string.h> //exclusive string function to make string operations easier
int main(){
    char randtr[]={'i', ' ', 'a', 'm', ' ', 'b', 'a', 't', 'm', 'a', 'n', '.', '\0'};
    //the \0 is used for stating that the string has ended in this method of creating strings
    printf("%s\n", randtr);
    printf("Length of the string is :  %zu\n", sizeof(randtr)/sizeof(randtr[0]));

    char name[]="Tera Bhai Seedhemaut";
    printf("Length of second string is : %zu\n", strlen(name)); // %zu is used in printf and scanf to print or read size values designed exclusively for C


    char str1[20]="Batman",
         str2[20];
    //we can also copy one string into another using `strcpy`
    strcpy(str2, str1); //copies string1's value into string2
    printf("copied string is : %s\n", str2);
    //the string getting value stored has to be large enough to store initial string's value

return 0;
}
