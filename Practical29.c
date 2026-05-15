#include<stdio.h>
struct Complex
{
    int real;
    int imaginary;
};
int main()
{
    struct Complex c1, c2, sum;
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%d", &c1.real);
    printf("Imaginary part: ");
    scanf("%d", &c1.imaginary);
    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%d", &c2.real);
    printf("Imaginary part: ");
    scanf("%d", &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    printf("\nSum = %d + %di",
           sum.real, sum.imaginary);
    return 0;
}
