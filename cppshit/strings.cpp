#include<iostream>
using namespace std;

int main(){ //exploring what and how we can work with strings cuz apparently CPP has that feature so why not
    string batman="Bruce Wayne",
           spiderman="Peter Parker",
           superman="Clark Kent",
           deadpool="Wade Wilson";
    cout << batman <<' '<< superman <<' '<< deadpool <<' '<< spiderman << "\n";

            string combined = batman+superman+deadpool+spiderman; //this is called concatination of strings
            cout << combined << "\n";
            //append - alright there is somethign called appent that is actually a function in cpp to be used on strings if needed
                   string name0=spiderman.append(deadpool).append(batman); //so here we see you can also concatinate at the end of a string more than once
            
            cout << "Length of the value of variable superman is : " << superman.size() << "\n" <<
            "\nLength of the var at Batman will be : " << batman.size() << "\n";

    return 0;
}
