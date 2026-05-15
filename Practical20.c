#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\n--- MENU ---\n");
    printf("1. strlen\n");
    printf("2. strcat\n");
    printf("3. strcpy\n");
    printf("4. strcmp\n");
    printf("5. strrev\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of first string = %lu", strlen(str1));
            break;
        case 2:
            strcat(str1, str2);
            printf("Concatenated string = %s", str1);
            break;
        case 3:
            strcpy(str1, str2);
            printf("Copied string = %s", str1);
            break;
        case 4:
            if(strcmp(str1, str2) == 0)
            {
                printf("Strings are equal");
            }
            else
            {
                printf("Strings are not equal");
            }
            break;
        case 5:
            strrev(str1);
            printf("Reverse string = %s", str1);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
