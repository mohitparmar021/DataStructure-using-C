#include <stdio.h>
#include <stdlib.h>


int checkSortedArray(int A[],int length)
{
    for(int i=0; i<length-1; i++)
    {
        if(A[i]>A[i+1])
            return 0;
    }
    return 1;
}


int main()
{
	 int A[10]={10,20,30,40,50,60,70};

  int ch = checkSortedArray(A,7);
  if(ch>0)
     printf("Array is Sorted");
  else
    printf("Array is Not Sorted");
	 
	return 0;
}