#include<stdio.h>
int main()
{
    int num, count = 0, reverse = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    printf("Reverse number = %d", reverse);
    return 0;
}
