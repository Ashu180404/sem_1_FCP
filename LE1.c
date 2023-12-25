#include<stdio.h>
int main()
{
    int interest, principal, time, rate ;
    printf("Enter the principle amount in rupees:\n");
    scanf("%d", &principal);
    printf("Enter the time duration in years:\n");
    scanf("%d", &time);
    printf("Enter the rate of interest:\n");
    scanf("%d", &rate);
    interest = (principal *time * rate)/100;
    printf("The simple interst on principle of rupees %d is: rupees %d", principal, interest);
    return 0;
}