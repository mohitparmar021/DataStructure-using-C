#include <stdio.h>
#include <stdlib.h>

void countDuplicateNumber1(int A[],int length) //first method, counting duplicate number in sorted array
{
    int i,j;
      for( i=0; i<length-1; i++)
      {
          if(A[i]==A[i+1])
          {
               j=i+1;
              while(A[j]==A[i])
                j++;
              printf("%d  is appearing %d times \n",A[i],j-i);
              i=j-1;
          }
      }
}

void countDuplicateNumber2(int A[],int length,int max) //  //Second method, counting duplicate number in  sorted array.
{
          int i;
          int H[max];
	      for (int i=0; i<=max; i++)
          {
     	      H[i]=0;
           }

          for(i=0; i<length; i++)
          {
              H[A[i]]++;
          }
          for(i=0; i<=max; i++)
          {
              if(H[i]>1)
              {
                  printf("%d   %d\n",i,H[i]);
              }
          }
}


int main()
{
 
    int  A[10]={3,6,8,8,10,12,15,15,15,20};

    countDuplicateNumber1(A,10); // Passing Array , Length
    countDuplicateNumber2(A,10,20);  // Passing Array, Length,Maximun value
  return 0;
}