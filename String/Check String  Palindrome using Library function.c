#include <stdio.h>
#include <stdlib.h>

void checkPalindrome(char *str)
  {
       int len=strlen(str);
       char two[len];

       strcpy(two,str);
       strrev(two);

      int cmp=strcmp(str,two);
      if(cmp==0)
      {
          printf("Yes, It is Palindrome String");
      }
      else
        printf("No, It is Not Palindrome String");
  }


int main()
{
    char str1[]="madam";
      
    checkPalindrome(str1);


    return 0;
}