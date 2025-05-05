#include<stdio.h>
int main(){
    //lets perform a reverse for loop here now
    int i;
    for(i=10; i>=0; i--){
        printf("%d\n", i);
    if(i==1)
        break;} //this will stop the program if the iteration reaches one and we only want to print natural numbers in reverse order
    return 0;
}
