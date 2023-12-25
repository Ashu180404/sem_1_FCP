#include <stdio.h>
int increament(int *n)
{
    return *n + 1;
}
int decreament(int *n)
{
    return *n - 1;
}
int adding(int *n)
{
    return *n + 5;
}
int subtracting(int *n)
{
    return *n - 5;
}
int Subtract(int *n, int *b)
{
    return *n - *b;
    ;
}
int main()
{
    int x = 10, y = 20;
    printf("Increament: %d\n", increament(&x));
    printf("Decreament: %d\n", decreament(&y));
    printf("Adding: %d\n", adding(&x));
    printf("Subtracting: %d\n", subtracting(&x));
    printf("Subtract: %d\n", Subtract(&x, &y));
}