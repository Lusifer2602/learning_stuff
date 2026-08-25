#include<stdio.h>
int main() {
    int multi[2][3]={ {12, 24, 36,},
                      {13, 26, 39} }; //multidimensional arrays work like matrices
                    /* You define a size in form of arrayname[rows][columns]={{c1, c2, c3}, row1
                                                                             {c1, c2, c3}}; row2 */
    //To change the value of an element in the array just define its location and change the value
    
        printf("2nd column's 3rd element before changing is is : %d\n", multi[1][2]);
        multi[1][2]=65; //now the second row's third element is 65
        printf("2nd column's 3rd element after changing is: %d\n"
       "1st column's 3rd element is: %d\n"
       "2nd column's 2nd element is: %d\n", 
       multi[1][2], multi[0][2], multi[1][1]);
        //important thing to remember is indexing starts with 0 even in arrays

return 0;

}