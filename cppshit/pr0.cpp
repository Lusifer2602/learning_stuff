#include<iostream>

using namespace std;

int main(){
    float age; int dob; bool liable; char name[10];
    cout << "Let us check if you are the legal age to drive yet\n";
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your birth year : ";
    cin >> dob;
    if(2026-dob>=18){
        cout << name << "\nYes you are a valid candidate to get a driver's license\n";
    }
        else {cout << "No you are an asshole who thinks he can drive car, maybe he actually can but legally for now you are not allowed to do so sir";}
     
return 0;

}
