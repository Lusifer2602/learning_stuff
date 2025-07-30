/*Triangle Utility Design (Modular & Functional)
Ask the user:
1 to find hypotenuse
2 to find perpendicular side
Functions you'll need:
double findHypotenuse(double base, double height);
double findPerpendicular(double hypotenuse, double base);
Inside the main()
Take user input for choice
Then prompt for required values based on that
Call appropriate function and print result with 2 decimal precision*/

#include<stdio.h>
#include<math.h>
/*data type - double as input and output. %.2f for output 
 * don't forget to keep function's variable's from the main program's variables*/

double hypo(double h, double b){
    return (double)sqrt(pow(h,2)+pow(b,2));
}
double perp(double hy, double b){
    return (double)sqrt(pow(hy, 2)-pow(b, 2));
}
        
int main()  {
    int choice;
    printf("Alright let us find what the Height or the perpendicular side of our Right Angled triangle is.\n"
            "First of all tell what you want to calculate here:\n"
            "Enter 1 for calculating hypotenuse\n2 either of the perpendicular sides: ");
        scanf("%d", &choice); //taking input from user to know what part of triangle they want to calculate

    double height, hypotenuse, base; //data type defining for the variables to be put into the functions
    if (choice==1){ //finding hypotenuse
        printf("Alright badboy enter the perpendicular height and base now separated with a space : ");
        scanf("%lf %lf", &height, &base);
        double hypotenuse=hypo(height, base);
        printf("\nAnd height of this triangle will be %.2lf\n", hypotenuse);
    }

    else if (choice==2){ //finding perpendicular height
        printf("\nOk Now Enter the other base and given hypotenuse length of the triangle\nseparated with spaces in the respective order : ");
        scanf("%lf %lf", &base, &hypotenuse);
        double height=perp(hypotenuse, base);

        printf("Hmmm. . . so your other perpendicular height is %.2lf\n", height);
    }
    else{printf("Invalid Input mf\n")};

return 0;
} //don't forget to compile wiht the -lm flag
