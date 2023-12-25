/*write two c programme for string manupulation with these respective scenario: 
    1. using string library
        1. string comparision
        2. concatination
        3. string reversal
        4. length comparision
*/
#include<string.h>
#include<stdio.h>

int main()
{
    char a[] = "This is my third assignment.";
    

    char b[] = "college is sometimes amazing";
    printf("%s\n", a);
    printf("%s\n", b);
    printf("if the strings are of same length it gives 0 and if different it gives 1: %d\n", strcmp(a,b));
    printf("concatination: %s\n", strcat(a,b));
    char c[] = "This is my third assignment.";

    printf("%s\n", strrev(c));
    printf("%s\n", strrev(b));
    printf("%d\n", strlen(c));
    printf("%d\n", strlen(b));
    printf("%d\n", strcmp(c,b));
    return 0;
}

/*write two c programme for string manupulation with these respective scenario: 
    1. using character array
      for the following operations:
        1. string conparision
        2. concatination
        3. string reversal
        4. length comparision*/


#include <stdio.h>
int findLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void reverseString(char str[]) {
    int start = 0;
    int end = findLength(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("1. Strings are equal.\n");
    } else {
        printf("1. Strings are not equal.\n");
    }

    int len1 = findLength(str1);
    int len2 = findLength(str2);

    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
    printf("2. Concatenated string: %s\n", str1);

    reverseString(str1);
    printf("3. Reversed string: %s\n", str1);

    if (len1 == len2) {
        printf("4. Lengths are equal.\n");
        printf("length of string 1 is: %d\n", strlen(1));
        printf("length of string 2 is: %d\n", strlen(2));
    } else {
        printf("4. Lengths are not equal.\n");
        printf("length of string 1 is: %d\n", strlen(1));
        printf("length of string 2 is: %d\n", strlen(2));
    }

    return 0;
}



/* create a structure in c programme to represent ece-a students data i.e-
    1. student name
    2. roll no
    3. gender */


#include<stdio.h>0
#include<string.h>

    struct student
    {
      char name[10];
      int roll;
      char gender;
    };

int main()
{   
    int i;
    struct student s[10];
    for (i=0;i<10;i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Roll no: ");
        scanf("%d", &s[i].roll);
        printf("Gender: ");
        scanf(" %c", &s[i].gender);  
        
    }
    printf("data entered:\n");
    for (i=0;i<10;i++)
    {
        printf("\nserial no: %d\nstudent name=%s\nrollno=%d\ngender=%c",i+1,  s[i].name,s[i].roll,s[i].gender);
    }
return 0;

}