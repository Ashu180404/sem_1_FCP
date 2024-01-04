#include<stdio.h>
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    } else{
        return num + sum(num - 1);
    }
    
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("enter a natural number");
    }else
    {
        int result = sum(num);
    printf("the sum of all natural numbers upto %d is %d", num, result);
    }
    return 0;
}
