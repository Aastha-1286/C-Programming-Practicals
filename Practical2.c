#include<stdio.h>

int main()
{
    int age;
    float marks;

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your marks: ");
    scanf("%f",&marks);

    printf("Age = %d\n",age);
    printf("Marks = %.2f",marks);

    return 0;
}
