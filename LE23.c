#include <stdio.h>

int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int main()
{
    int x = 10, y = 20;
    printf("Addition: %d\n", add(&x, &y));
}