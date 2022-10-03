#include <stdio.h>
 
int main()
{
    int a,b,c,d,e,sum;
    float avg;
 
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    printf("Enter fourth number :");
    scanf("%d",&d);
    printf("Enter fifth number :");
    scanf("%d",&e);
 
    sum=(a+b+c+d+e);
    avg= (float)(a+b+c+d+e)/5;
 
    printf("\nSum is = %d",sum);
    printf("\nAverage is = %f",a,b,c,d,e,avg);
 
    return 0;
}
