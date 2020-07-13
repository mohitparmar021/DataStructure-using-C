#include <stdio.h>
#include <stdlib.h>

void findDuplicateNumber(int A[], int length)    // finding duplicate number in sorted array
{
    int lastDuplicate=0;
    int i;
    for(i=0; i<length; i++)
    {
        if(A[i]==A[i+1] && A[i]!=lastDuplicate)
        {
            printf("%d  ",A[i]);
            lastDuplicate=A[i];
        }
    }
}

int main()
{
 
    int  A[10]={3,6,8,8,10,12,15,15,15,20};

  findDuplicateNumber(A,10); // Passing Array , Length
  return 0;
}