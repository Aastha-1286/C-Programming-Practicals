#include<stdio.h>
int prime(int n)
{
    int i;
    if(n <= 1)
    {
        return 0;
    }
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int armstrong(int n)
{
    int original, remainder, result = 0;
    original = n;
    while(n != 0)
    {
        remainder = n % 10;
        result = result + (remainder * remainder * remainder);
        n = n / 10;
    }
    if(result == original)
    {
        return 1;
    }
    return 0;
}
int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(prime(num))
    {
        printf("%d is a Prime number\n", num);
    }
    else
    {
        printf("%d is not a Prime number\n", num);
    }
    if(armstrong(num))
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }

    if(perfect(num))
    {
        printf("%d is a Perfect number\n", num);
    }
    else
    {
        printf("%d is not a Perfect number\n", num);
    }
    return 0;
}
