#include <stdio.h>
#include <stdlib.h>


void countfindDuplicateNumber(int A[],int length)
{

    for(int i=0; i<length-1; i++)
     {
          int count=1;

      if(A[i]!= -1)
       {
          for(int j=i+1; j<length; j++)
          {
              if(A[i]==A[j])
              {
                  count++;
                  A[j]=-1;
              }
          }
          if(count>1)
          {
              printf("%d  %d \n",A[i],count);
          }
       }
     }

}

int main()
{
 
    int  A[10]={3,6,8,8,10,12,15,15,15,20};

    countfindDuplicateNumber(A,10); // Passing Array , Length
  return 0;
}