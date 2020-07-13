#include <stdio.h>
#include <stdlib.h>

void CountWord(char *str)
{
    int countWord=1;
    for(int i=0; str[i]!='\0'; i++)
    {
         if(str[i]==' '&& str[i-1]!=' ')
            countWord++;
    }
    printf("No. of Word : %d",countWord);
}


int main()
{

       char sen[]="Where are you from ?";
       CountWord(sen);

    return 0;
}