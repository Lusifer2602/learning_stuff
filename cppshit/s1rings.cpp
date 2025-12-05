#include<iostream>
using namespace std;

int main(){
    string phrase ;
    cout << "Enter a sentence : ";
    getline(cin, phrase); /*getin can take and return an entire sentence as input
                          whereas in case of cin if asked to return the value of the saved variable
                          the output is given as only the first word of the entire string */
    
    cout << "\nThe entered sentence is :\n" << phrase << "\n"; 
    cout << "Enter a sentence again : ";
    cin >> phrase;
    cout << "Hmmmm . . . " << phrase << "\n";

    return 0;
}
