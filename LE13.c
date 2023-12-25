#include <stdio.h>

int findLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
void reverseString(char str[])
{
    int start = 0;
    int end = findLength(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str1[100];
    printf("Enter the string: ");
    fgets(str1,sizeof(str1), stdin);

    reverseString(str1);
    printf("3. Reversed string: %s\n", str1);

    return 0;
}