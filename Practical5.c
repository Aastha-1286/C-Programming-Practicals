#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter the values of a and b : ");
    scanf("%f%f",&a,&b);

    printf("Addition = %.2f\n",a+b);
    printf("Subtraction = %.2f\n",a-b);
    printf("Multiplication = %.2f\n",a*b);
    printf("Division = %.2f",a/b);

    return 0;
}
