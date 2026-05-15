#include<stdio.h>
int main()
{
    char ch;
    int num;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    printf("\nEnter a number: ");
    scanf("%d", &num);
    switch(num > 0)
    {
        case 1:
            printf("Positive Number");
            break;
        case 0:
            switch(num < 0)
            {
                case 1:
                    printf("Negative Number");
                    break;
                case 0:
                    printf("Zero");
                    break;
            }
    }

    return 0;
}
