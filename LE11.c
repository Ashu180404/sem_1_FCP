#include<stdio.h>
int main()
{
    int a[3][3], i, j, b[3][3], k, l, m, n, c[3][3];
    printf("This programme will generate a matrix from your entries\n"
    "The numbers you enter will first fill the first row then the next.\n");
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }       
    }
    printf("Enter the data in similiar way for the second matrix.\n");
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            scanf("%d", &b[k][l]);
        } 
    }
    printf("the first matrix is: \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ;j++)
        {
           printf("%d     ", a[i][j] );
        }
        printf("\n");
    }
    
    printf("the second matrix is:\n");
    for ( k = 0; k < 3; k++)
    {
        for (l = 0; l < 3 ;l++)
        {
           printf("%d     ", b[k][l] );
        }
        printf("\n");
    }
    
    for ( m = 0; m < 3; m++)
    {
        for ( n = 0; n < 3; n++)
        {
            c[m][n] = a[m][n] + b[m][n]; 
        }   
    }

    printf("The sum of these two matrix is this matrix: \n");
    for (m = 0; m < 3 ; m++)
    {
        for ( n = 0; n < 3 ; n++)
        {
            printf("%d    ", c[m][n]);
        }
        printf("\n");
    }
    return 0;
}