#include<stdio.h>

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
    int n, c, r;
    printf("this is to find nCr by accepting value from user:\n");
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("Enter the value of r: \n");
    scanf("%d", &r);
    c = factorial(n)/(factorial(n-r) * factorial(r));
    printf("the value of nCr is: %d", c);  
    return 0;
}