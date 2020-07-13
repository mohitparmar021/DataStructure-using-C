#include <stdio.h>
#include <stdlib.h>

void countVowelAndConsonent(char *str)
{
   int i,vcount=0,ccount=0;
   for(i=0; str[i]!='\0'; i++)
   {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
       {
           vcount++;
       }
       else if(str[i]>=65||str[i]<=90||str[i]>=97||str[i]<=122)
            ccount++;
   }
   printf("No. of Vowels : %d  And No. of Consonents : %d ",vcount,ccount);
}

int main()
{
    char str[]="welcomemohitparmar";
    countVowelAndConsonent(str);

    return 0;
}