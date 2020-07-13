#include <stdio.h>
#include <stdlib.h>


void  findingPair(int A[],int length,int k)   // Finding Pair with sum for Sorted Array
{
      int i=0;
      int j=length-1;
      while(i<j)
      {
          if(A[i]+A[j]==k)
          {
              printf("(%d,%d)=%d\n",A[i],A[j],k);
              i++;
              j--;
          }
          else if(A[i]+A[j]<k)
          {
              i++;
          }
          else
            j--;
      }
}


int main()
{
 
    int  A[10]={2,3,7,8,10,12,15,17,16,20};

     findingPair(A,10,10);

  return 0;
}