// write a c programme to implement the following:
/*1. Nested if else cases to determine weTHER  given number is divisible by  3,7,5,8,6
  2. Use modulo operator or remainder operator to calc remainder a given number and switch the cases depending on the remainder
*/

// solution number 1

#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number to check it's divisiblity by 3, 5, 6, 7, 8: \n");
  scanf("%d", &a);
  if ((a%3 == 0 || a%5 == 0 || a%6 == 0 || a%7 == 0 || a%8 == 0))
  {
    if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0)
    {
      if (a%2 == 0)
      {printf("The number is divisible by 2.\n");}
      else if (a%3 == 0)
      {
        printf("The number is divisible by 3.\n");
      }
      else
      {
        printf("The number is divisible by 5.\n");
      }
    }
    else if (a%7 == 0)
    {
      printf("The number is divsible by 7.\n");
    }
    else if (a%8 == 0)
    {
      printf("The number is divisible by 8.\n");
    }
    else
    {
      printf("The number is not divisible by: 3, 5, 6, 7, 8");
    }
  }
  else
  {
    printf("The number is not divisible by: 3, 5, 6, 7, 8");
  }
  
  return 0;
  
}