#include <stdio.h>
void main()
{
    float num, avg, sum;
    int i,n;
    printf("Maximum no. of inputs \n");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++)
    {
        scanf("%f", &num);
        if (num<0.0)
        break;
        sum=sum+num;
    }
    avg=sum/n;
    printf("Average is %f", avg);
}