#include<stdio.h>

void transpose(int a[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = a[j][i];
        }
    }
}

int main()
{
    int a[3][3], result[3][3];
    printf("This program will pass the 3*3 matrix to a function\n");
    printf("where the function will return the transpose back to main.\n");
    printf("Enter a 3*3 matrix by entering in row one then in other rows:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    transpose(a, result);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}