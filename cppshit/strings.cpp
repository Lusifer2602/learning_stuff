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
            "\nLength of the var at Batman will be : " << batman.length() << "\n";
            //and apparently here we have found out that size and length functipn do the same thing to a string

            //And now we just dounfound out that just like in python we can perform indexing in cpp like I am going to do below
            cout << "So the first letter of the var Superman is : " << superman[0] << '\n';
            //Now we can also change characters within strings
            string samplestring="I am vengeance";
            cout << "\nRight now the value of the variable samplestring is : " << samplestring;
            samplestring[5]='V';
            cout << "\nNow the samplestring holds the value : " << samplestring << "\n";


    return 0;
}
