// Bitwise operators

#include<stdio.h>
int main() {
//these opeartors work directly on binary bits (o & 1)
/* AND & Both bits must be 1 to get 1
 * OR | If any bit is 1, the result is 1
 * XOR ^ If bits are different the result is 1
 * NOT ~ Flips all bits
 * Left Shift << Shift bits to the left
 * Right Shift >> Shifts bits to the right*/

int teri_mummy=5, tera_daddy=10;
/*  0101   (5)
& 0011   (3)
= 0001   (1)*/

printf("%d\n", teri_mummy&tera_daddy);
printf("%d/n", teri_mummy|tera_daddy);
printf("%d/n", teri_mummy^tera_daddy);
// printf("%d/n", teri_mummy~tera_daddy);
printf("%d/n", teri_mummy<<tera_daddy);
printf("%d/n", teri_mummy>>tera_daddy);
return 0;
}

