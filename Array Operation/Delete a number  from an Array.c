#include <stdio.h>
#include <stdlib.h>

int delete(int A[],int length,int index)
{
    int i;
    int x=A[index];
    int in=index;
     for(i=index; i<length-1; i++)
     {
            A[i]=A[i+1];
     }
     length--;
     
     printf("\n%d is Deleted at index %d \n",x,in);
}

int main()
{
   int A[10]={10,20,30,40,50,60,70};
   
   delete(A,7,3);    // passing array , length , index

   return 0;
}