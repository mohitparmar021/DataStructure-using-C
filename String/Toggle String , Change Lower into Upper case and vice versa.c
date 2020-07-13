#include <stdio.h>
#include <stdlib.h>


void ToggleStringCase(char *str)
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s", str);
}


int main()
{
    char string[]="MoHITparMaR";

    ToggleStringCase(string);

    return 0;
}