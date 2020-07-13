#include <stdio.h>
#include <stdlib.h>


void findPair(int A[],int Length,int k)    // finding pair for unsorted array
{
    for(int i=0; i<Length-1; i++)
    {
        for(int j=i+1; j<Length; j++)
        {
            if(A[i]+A[j]==k)
            {
                 printf("(%d,%d)=%d\n",A[i],A[j],k);
            }
        }
    }
}

int main()
{
 
     int  A[10]={2,3,7,8,10,12,15,17,16,20};

    findPair(A,10,10);
   
  return 0;
}