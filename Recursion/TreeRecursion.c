#include <stdio.h>
#include <stdlib.h>

void funTree(int n)
{
	if(n>0)
    {
		printf("%d ", n);   // Printing Output : 3 2 1 1 2 1 1
		funTree(n-1);   // Recursively calling function
	    funTree(n-1);   // Recursively calling function
    }
}

int main()
{
	int a=3;
    funTree(b);   // Calling funHead() function
    return 0;
}
