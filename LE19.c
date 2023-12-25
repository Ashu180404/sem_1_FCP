#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, n;
    printf("Enter the number to find");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            printf("Number is present.");
            return 0;
        }
    }
    printf("Number is absent.");
}