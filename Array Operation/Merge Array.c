#include <stdio.h>
#include <stdlib.h>

void mergeArray(int A[],int B[],int m,int n)   // For Sorted Array
{  
    int C[m+n], i=0 ,j=0,k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    for(; i<m; i++)
    {
        C[k++]=A[i];
    }
    for(; i<n; i++)
    {
        C[k++]=B[i];
    }

    for(int l=0; l<(m+n-1); l++)
    {
        printf("%d ",C[l]);
    }

}

int main()
{
    int  A[10]={2,4,6,8,10,12};
    int  B[10]={1,3,5,7,9,13,17,19};

    mergeArray(A,B,6,8);   // Passing Array A , B and length of them

    return 0;
}
