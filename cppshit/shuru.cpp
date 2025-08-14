#include<iostream>
using namespace std; //helps compiler not confuse use of same keywords at different parts of the program

int main() {
    std :: cout << "Here's the first output" // std :: count << is used in place of printf but this will have to be repeated with every new statement that repeats a previously used cout any time in the code, hence we rather have namespace to take care of this 
            "\nNow is when we start to learn and build shit in C++\n";
    cout << "This is next line I am checking to see something here\n"; //runs sexily
return 0; //same as cpp
}
