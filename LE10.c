// Write a program that uses two functions to swap two numbers
//  a. Using a third variable.
//  b. without using a third variable.
#include <stdio.h>
int swapwiththirdvar(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("The value of a= %d and b = %d", a, b);
    return 0;
}
int swapwithnovar(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a= %d and b = %d", a, b);
    return 0;
}
int main()
{
    int a, b, n;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("press 1 to swap with help of 3rd variable\npress 2 to swap witho out help of 3rd variable: ");
    scanf("%d", &n);
    if (n == 1)
    {
        swapwiththirdvar(a, b);
    }
    if (n == 2)
    {
        swapwithnovar(a, b);
    }
    return 0;
}