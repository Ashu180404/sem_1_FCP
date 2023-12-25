/*Assignment write a programme to perform a following task:
1.  Print two 3*3 matrices
2. Print addition of these matrices
3. Print adjoint of any of these matrices
4. Calculate inverse of any one of the matrices.*/

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
    // to find adjoint of any one of these two matrices
    int adj[3][3];
    printf("The adjoint of first matrix is: \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ;j++)
        {
          adj[i][j] = (a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]);
          printf("%d   ", adj[i][j]); 
        }
        printf("\n");
    }

    //to find inverse of any one the following matrix.
    float det;
    
    det = (a[0][0]*((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1]*((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2]*((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));
    printf("Determinant value of 1st matrix is:%.2f\n", det);
    if (det == 0)
    {
        printf("The determinant is 0 so inverse is not possible");
    }
    else
    {
        float inverse[3][3];
        printf("The inverse of first matrix is:%.2f \n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                inverse[i][j] = (adj[i][j])/det;
                printf("%.2f   ", inverse[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}