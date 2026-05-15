#include<stdio.h>
int main()
{
    int a, b, c, greatest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    /* Using conditional operator */
    greatest = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
    printf("\nGreatest using conditional operator = %d\n", greatest);
    /* Using if-else */
    if(a>b && a>c)
    {
        printf("Greatest using if-else = %d", a);
    }
    else if(b>c)
    {
        printf("Greatest using if-else = %d", b);
    }
    else
    {
        printf("Greatest using if-else = %d", c);
    }
    return 0;
}
