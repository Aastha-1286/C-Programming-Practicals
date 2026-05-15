#include<stdio.h>
int main()
{
    int matrix[10][10], transpose[10][10];
    int rows, cols;
    int i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose Matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
