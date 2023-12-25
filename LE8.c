#include<stdio.h>

int sum(int array[])
{
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        result += array[i];
    }
    return result;
}

int main()
{   
    
    int array[] = {1, 45, 6, 87, 3, 35, 36, 45, 25, 89};
    
        int result = sum (array);
        printf("sum of this whole array is %d", result);
    
    return 0;
}