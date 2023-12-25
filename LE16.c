#include <stdio.h>

int fibonacci(int num)
{

    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num;
    printf("This is a programme to print fibonacci series\nEnter the number of terms you want to be in series:\n");
    scanf("%d", &num);
    printf("Fibonacci series: ");
    for (int i = 1; i < num+1; i++)
    {
        printf(" %d ", fibonacci(i));
    }
    return 0;
}