#include <stdio.h>
int main()
{
    int card[20];
    int  sum = 0;
    printf("\nEnter the card number: ");
    scanf(" %d", &card);

    for (int i = 0; i <= 1; i++)
    {
        card[i] -= 48;
        if ((i % 2))
        {
            sum = sum + card[i];
        }
        else
        {
            card[i] *= 2;
            if (card[i] >= 10)
            {
                card[i] -= 9;
                sum = sum + card[i];
            }
        }
        if (!(sum % 10))
        {
            printf("\nNumber is valid.");
        }
        else
        {
            printf("\nNumber is not valid");
        }
        return 0;
    }
    return 0;
}