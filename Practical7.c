#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    /* Using temporary variable */
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping using temporary variable:\n");
    printf("a = %d\nb = %d\n", a, b);
    /* Without temporary variable */
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping again without temporary variable:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
