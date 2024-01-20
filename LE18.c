#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    char ch;
    printf("Enter first number:\n");
    scanf("%f", &a);
    printf("Enter second number:\n");
    scanf("%f", &b);
    printf("Enter the operator:\n ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("Addition : %f", a + b);
        break;
    case '-':
        printf("Substraction : %f", a - b);
        break;
    case '/':
        printf("Division : %.2f", a / b);
        break;
    case '*':
        printf("Multiplication : %f", a * b);
        break;
    case '%':
        printf("%f", a % b);
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}