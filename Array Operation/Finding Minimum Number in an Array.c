#include <stdio.h>
#include <stdlib.h>

int Minimum(int A[],int length)
{
     int min=A[0];
     for(int i=1; i<length; i++)
     {
         if(min>A[i])
         {
           min=A[i];
         }
     }
     return min;
}

int main()
{

   int A[10]={80,40,70,10,90,100,88,8,29,55};

   printf("Minimum Number in an Array : %d",Minimum(A,10));
	
	return 0;
}