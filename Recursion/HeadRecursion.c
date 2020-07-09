#include <stdio.h>
#include <stdlib.h>

void funHead(int x)
{
	if(x>0)
    {
		funHead(x-1);   // Recursively calling function
		printf("%d ", x);  //printing Output : 1 2 3
    }
}

int main()
{
	int n=3;
    funHead(n);   // Calling funHead() function
    return 0;
}
