#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    
        if (num < 0) 
        {
            printf("Factorial is not defined for negative numbers.\n");
        } else 
        {
            int result = factorial(num);
            printf("Factorial of %d is %d\n", num, result);
        }
    }
}
