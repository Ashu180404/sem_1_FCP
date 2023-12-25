#include<stdio.h>
int main()
{
    int array[] = {1, 45, 6, 87, 3, 35, 36, 45, 25, 89};
    printf("the size of array is: %d\n", sizeof(array));
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", array[i]);
        }
        
    }
    
    return 0;
}