#include<stdio.h>
void add(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    add(&num1, &num2, &result);
    printf("Sum = %d", result);
    return 0;
}
