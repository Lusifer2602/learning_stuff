#include <stdio.h>
#include <conio.h>
void main()
{
    int ch, b, h, a, c;
    float r;
    printf("Enter the choice:\n1.Circle\n2.Square\n3.Rectange\n4.Triangle\nChoice:");
    scanf("%d", &ch);
    switch(ch)
{
    case 1:printf("\nEnter the radius of the circle : ");
    scanf("%f", &r);
    printf("\nArea of circle=%f", 3.14*r*r);
    printf("\nPerimeter of Circle=%f", 2*3.14*r);
    break;
    
    case 2:printf("\nEnter the side of the square : ");
    scanf("%d", &a);
    printf("\nThe area of the square is %d", a*a);
    printf("\nPerimeter of square is %d", 4*a);
    break;

    case 3:printf("\nEnter the breadth and height of rectangle:");
    scanf("%d%d", &b, &h);
    printf("\nArea of the rectangle:%d", a*a);
    printf("\nPerimeter of the rectangle :%d", b*h);
}
}