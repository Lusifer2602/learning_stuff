#include<iostream>
#include<typeinfo>
using namespace std;
int main(){

    //this is the best thing i have discovered about cpp so far that actually made me like something about this language and its
    //  the 'auto' keyword - bro this keyword allows the compiler to detect what kind of value a variable has
    auto heheh=123.2131;
    auto batman="I";
    auto fsociety="200";
    
    cout << "Type of heheh is : " << typeid(heheh).name()
        << "\nBatman's type is : " << typeid(batman).name()
        << "\nfsociety's type is : " << typeid(fsociety).name() << '\n';//the outputs may vary when it comes to printing type for strings
    return 0;
}
