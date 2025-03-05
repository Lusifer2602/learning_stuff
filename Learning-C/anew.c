#include <stdio.h>
//Keywords
 
// auto - used to declare a variable inside a function or a block. auto variables can be accessed only within the function/block they have been declared inside

int printvalue() {
    auto int a=10;
    printf("%d\n", a);
}

int main() {
    printvalue();
    return 0;
}
