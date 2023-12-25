#include <stdio.h>
int main()
{   
    int max=0, min, sum=0;
    double avg;
    int array[] = {1, 45, 6, 87, 3, 35, 36, 45, 25, 89, 56, 25, 63};
    for (int j = 0; j < 13; j++)
    {
        if (max < array[j])
        {
            max = array[j];
        }
        min = array[0];
        if (min > array[j])
        {
            min = array[j];
        }
        sum += array[j];
    }
    avg = (double)sum / 13;
    printf("Greatest number is %d\n", max);
    printf("Smallest number is %d\n", min);
    printf("Average of the array is %.2lf", avg);
    return 0;
}