#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char str[200], word[50], replace[50];
    char temp[500] = "";
    int i, j, count = 0;
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    fgets(str, sizeof(str), fp);
    fclose(fp);
    printf("Enter word to find: ");
    gets(word);
    printf("Enter replacement word: ");
    gets(replace);
    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while(str[i + j] == word[j] && word[j] != '\0')
        {
            j++;
        }
        if(word[j] == '\0')
        {
            strcat(temp, replace);
            i = i + j - 1;
            count++;
        }
        else
        {
            int len = strlen(temp);
            temp[len] = str[i];
            temp[len + 1] = '\0';
        }
    }
    printf("\nModified String:\n%s", temp);
    printf("\nTotal Occurrences = %d", count);
    return 0;
}
