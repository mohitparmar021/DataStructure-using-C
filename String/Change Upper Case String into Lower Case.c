#include <stdio.h>
#include <stdlib.h>

void changeIntoLowerCase(char *str)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        str[i]=str[i]+32;
    }
    printf("%s",str);
}

int main()
{
    char str[]="WELCOMEMOHITPARMAR";

    changeIntoLowerCase(str);

    return 0;
}