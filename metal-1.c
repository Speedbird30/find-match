/*
Name: Sumit Subhash Jadhav
U89612131.
This program checks two metal (strings) and outputs the common letters from them
*/
#include <stdio.h>
#define STR_LEN 1000  //setting string length to 1000
int count(char *s1, char *s2)   //count function
{
    int counter=0;
    char *pointer=s2;   //using pointer for string

    while(*s1!='\0')
    {
        while(*pointer!='\0')
        {
            if (*s1==*pointer)
            {
                counter++;
            }
            pointer++;
        }
        s1++;
        pointer=s2;
    }
    return counter;
}
int read_line(char *str, int n)  //read_line function
{
    int ch; int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            *str++= ch;
            i++;
        }
    }
    *str = '\0';
    return i;
}
int main()
{
    char s1[STR_LEN];
    char s2[STR_LEN];

    printf("Enter s1: ");
    read_line(s1,STR_LEN);   //passing parameters to read_line function

    printf("Enter s2: ");
    read_line(s2,STR_LEN);   //passing parameters to read_line function

    printf("Output: %d", count(s1,s2));

    return 0;
}
