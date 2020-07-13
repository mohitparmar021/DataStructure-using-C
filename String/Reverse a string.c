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

void ReverseString1(char * str)   // first Method 
{
    int len=Length(str);
    char str1[len];
    int i,j;
    for(i=0; str[i]!='\0'; i++)
    {

    }
    i=i-1;
    for(j=0; i>=0; j++, i--)
    {
        str1[j]=str[i];
    }
    str1[j]='\0';
    printf("%s ",str1);
}

void ReverseString2(char *str)   // Second Method ,swaping is done to reverse
{
    char t;
    int i,j;
   for(i=0; str[i]!='\0'; i++)
    {

    }
    i=i-1;
     for(j=0; j<i; j++,i--)
     {
         t=str[j];
         str[j]=str[i];
         str[i]=t;
     }
     printf("%s",str);
}


int main()
{
       char str[]="Mohit";
       
       ReverseString1(str);

       ReverseString2(str);

   return 0;
}
