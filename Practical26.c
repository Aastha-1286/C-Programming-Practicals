#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], sub[50];
    int i, j, count = 0;
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);
    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while(str[i + j] == sub[j] && sub[j] != '\0')
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            count++;
        }
    }
    printf("Total occurrences = %d", count);
    return 0;
}
