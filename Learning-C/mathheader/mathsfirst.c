#include<stdio.h>
#include<math.h>
int main(){
    /* double a=9; */
    /* int b = (int)pow(a, 2); */
    /* printf("We want to find square of 9\n" */
    /*         "so it will be : %d\n", b); */

    /* int batman=9; */
    /* printf("Square root of 9 will be : %d\n", (int)sqrt(batman)); */

    /* double new=32.2; */
    /* printf("Square of %.1lf will be %.3lf\n", new, pow(new, 2)); */

//lets create a program that calculates the length of hypotenuse of a triangle
printf("Let us calculate length of hypotenuse\n\n");
int height, length, hypotenuse;
printf("Enter the height and perpendicular \nlength should separated with a space : ");
scanf("%d %d", &height, &length);

hypotenuse=(int)(sqrt(pow(height, 2)+pow(length, 2)));

printf("Alright that means the hypotenuse should be %d\n", hypotenuse);

 return 0;
}
