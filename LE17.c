#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Test.txt", "a");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    
    fputs("\nIt's me", fp);
    fclose(fp);

    fp = fopen("Test.txt", "a");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    fprintf(fp, "\n%sit's you", "a");
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    int c;
    while ((c = fgetc(fp))!= EOF)
    {
        putchar(c);
    }
    fclose(fp);
    return 0;
}