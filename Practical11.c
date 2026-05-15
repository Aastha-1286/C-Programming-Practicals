#include<stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    for( ; num != 0; num = num / 10)
    {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
    }
    if(result == originalNum)
    {
        printf("%d is an Armstrong number", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number", originalNum);
    }
    return 0;
}
