#include<stdio.h>
int main()
{   

    int array[] = {1, 45, 6, 87, 3, 35, 36, 45, 25, 89};
    for (int i = 0; i < 1; i++)
    {
        int n = array[i];
        int j = i+1;
        do
        {
            if (array[j]>n) 
            {
                n = array[j];
            }
            j = j+1;
        } while (j<10);
        printf("maximum value in array is %d\n", n);
    }
    return 0;
}