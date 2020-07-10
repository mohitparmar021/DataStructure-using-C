#include <stdio.h>
#include <stdlib.h>


void display(int A[],int length)
{
    for(int i=0; i<length; i++)
    {
        printf("%d  ",A[i]);
    }
}

void insertInSortedArray(int A[],int length,int element)
{
     int i=length-1;
     while(A[i]>element)
     {
         A[i+1]=A[i];
         i--;
     }
     A[i+1]=element;
     length++;
     display(A,length);
}

int main()
{
	 int A[10]={10,20,30,40,50,60,70};

	 insertInSortedArray(A,6,38);
	 
	return 0;
}