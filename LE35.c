#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// to find occurance of two vowels in succession

int main()
{
    int num = 0, temp = 0;
    char str[] = "Read the question meticulously";
    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] == 'a'||'e'||'i'||'o'||'u')
        {
            num = num+1;

            if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u') {
                temp = temp + 1;
            }
        }
        
    }
    
    printf("Number of occurrences of two vowels in succession: %d\n", temp);

    return 0;
}