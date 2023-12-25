#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], sum = 0;
    printf("Enter 1st array of 2X2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal addition of both matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
}