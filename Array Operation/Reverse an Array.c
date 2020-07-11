#include <stdio.h>
#include <stdlib.h>


void ReverseArray(int A[],int length)  // first Method for Reversing an array
{
    int B[length],i,j;
    for(i=length-1,j=0; i>=0; i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0; i<length; i++)
    {
        A[i]=B[i];
    }
    for(i=0; i<length; i++)
    {
        printf("%d ",A[i]);
    }

}
void ReverseArray2(int A[],int length)   //Second method for reversing an array
{
    int i,j;
    for(i=0,j=length-1; i<j; i++,j--)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }

    for(i=0; i<length; i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{
   int A[10]={10,20,30,40,50,60,70};

    ReverseArray(A,7);  // Passing Array and length of array

    ReverseArray2(A,7);

    return 0;
}