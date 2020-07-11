#include <stdio.h>
#include <stdlib.h>

void missingOneElement(int A[],int length)
{
    int diff=A[0]-0;
    for(int i=0; i<length; i++)
    {
        if(A[i]-i!=diff)
         {
             printf("Missing Element  :  %d ",i+diff);
             break;
         }
    }
}

int main()
{
	int A[10]={3,4,5,8,9,10,11};

	missingOneElement(A,7);
	
	return 0;
}