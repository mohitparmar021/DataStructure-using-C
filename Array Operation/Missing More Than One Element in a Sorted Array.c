#include <stdio.h>
#include <stdlib.h>

void missingMoreThanOneElement(int A[],int length)
{
    int diff=A[0]-0;
    for(int i=0; i<length; i++)
    {
        if(A[i]-i!=diff)
        {
            while(diff<A[i]-i)
            {
                printf("%d  ",i+diff);
                diff++;
            }
        }
    }

}

int main()
{
	int A[10]={3,4,5,8,9,10,11};

	missingMoreThanOneElement(A,7);
	
	return 0;
}