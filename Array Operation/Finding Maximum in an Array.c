#include <stdio.h>
#include <stdlib.h>

int Maximum(int A[],int length)
{
    int max=A[0];
    for(int i=1; i<length; i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    return max;
}

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

int int main(int argc, char const *argv[])
{

   int A[10]={80,40,70,10,90,100,88,8,29,55};

   printf("Maximum Number in an Array : %d",Maximum(A,10));
   printf("Minimum Number in an Array : %d",Minimum(A,10));
	
	return 0;
}