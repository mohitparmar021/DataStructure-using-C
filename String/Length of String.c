#include <stdio.h>
#include <stdlib.h>

int Length(char * str)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {

    }
    return i;
}

int main()
{
    char * str="WELCOME MOHIT PARMAR";
    printf("Length of String : %d",Length(str));
    return 0;
}