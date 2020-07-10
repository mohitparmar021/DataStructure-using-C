#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int A[],int length,int key)
{
    int i;
    for(i=0; i<length; i++)
    {
          if(key==A[i])
          {
              return i;
          }
    }
    return -1;
}

int main()
{
   int A[10]={10,20,30,40,50,60,70,80,90,100};
   
  int x=LinearSearch(A,10,70);   //passing array, length, key
  if(x>=0)
    printf("Number is Searched at Index : %d \n",x);
  else
    printf("Number is  not Present");

   return 0;
}