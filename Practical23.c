#include<stdio.h>
void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping using Call by Value:\n");
    printf("a = %d\nb = %d\n", a, b);
}
void swapReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    swapValue(a, b);
    printf("\nOriginal values after Call by Value:\n");
    printf("a = %d\nb = %d\n", a, b);
    swapReference(&a, &b);
    printf("\nAfter swapping using Call by Reference:\n");
    printf("a = %d\nb = %d", a, b);
    return 0;
}
