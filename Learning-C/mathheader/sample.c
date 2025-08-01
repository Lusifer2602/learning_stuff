#include<stdio.h>
#include<math.h>
int main() {
    double a, b;
    printf("Enter main number : ");
    scanf("%lf", &a);
    printf("Enter the root value : ");
    scanf("%lf", &b);

    double c=pow(a, 1.0/b);
    printf("\nHere's the answer : %.2\n", c);

return 0;
}

float power(float a, float b){
    return pow(a,b)
}

float root(float a, float b){
    return pow(a,1.0/b)

}
float modulus(float a, float b);
    return (a%b);
}
