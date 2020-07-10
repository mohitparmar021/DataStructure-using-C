#include <stdio.h>
#include <stdlib.h>

int RBinarySearch(int A[],int low,int high,int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            return RBinarySearch(A,low,mid-1,key);
        else
            return RBinarySearch(A,mid+1,high,key);
    }
    return -1;
}

int main()
{
   int A[10]={10,20,30,40,50,60,70,80,90,100};
   
  int x=RBinarySearch(A,0,9,30);   //passing array, length, key
  if(x>=0)
    printf("Number is Searched at Index : %d \n",x);
  else
    printf("Number is  not Present");

   return 0;
}