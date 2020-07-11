#include <stdio.h>
#include <stdlib.h>


void missingMoreThanOneElement(int A[],int length,int min,int max)
{
	int H[min+max];

	  for (int i=0; i<min+max; i++)
     {
     	   H[i]=0;
     }

     for (int i=0; i<min+max; i++)
     {
     	   H[A[i]]++;
     }
     for (int i=min; i<max; i++)
     {
     	 if(H[i]==0)
     	 {
     	 	printf("%d   ", i);
     	 }
     }
}



int main()
{
	int A[10]={3,4,5,8,9,10,11};

	missingMoreThanOneElement(A,7,3,11); // Passing Array , Length , Minimum value ,Maximum value
	
	return 0;
}