#include<stdio.h>
int main()
{
    printf("hello function");
    printf("Enter number of your choice: \n");
    int a;
    scanf("%d", &a);
    if (a%2 == 0){
        printf("The number is even.\n");
    }
    else
    {
        printf("The numbers odd");
    }
    return 0;
}