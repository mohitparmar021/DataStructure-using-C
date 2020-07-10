#include <stdio.h>
#include <stdlib.h>

void insert(int A[],int length,int index,int n)
{
    int i;
    for(i=length; i>index; i--)
    {
        A[i]=A[i-1];
    }
    A[index]=n;
    length++;
    
    for(i=0; i<length; i++)
    {
        printf("%d  ",A[i]);
    }
}

int main()
{
   int A[10]={10,20,30,40,50,60,70};
   
   insert(A,7,5,90);  //passing array , length , index , number

   return 0;
}