#include<string.h>
#include<stdio.h>

int main()
{
    char a[] = "This is my assignment.";
    

    char b[] = "animals are cute. ";
    printf("%s\n", a);
    printf("%s\n", b);
    printf("concatination: %s\n", strcat(a,b));
    char c[] = "This is my assignment.";

    
    printf("Length of first sstring is %d\n", strlen(c));
    printf("length of second string is %d\n", strlen(b));
    
    return 0;
}