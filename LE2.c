#include<stdio.h>
int main()
{
    double tempf,tempc;
    printf("Please enter the temperature (Fahrenheit):\n");
    scanf("%lf", &tempf);
    tempc = (tempf - 32) * (5.0 / 9.0);
    printf("The temperature in Celcius is: %f", tempc);
    return 0;
}