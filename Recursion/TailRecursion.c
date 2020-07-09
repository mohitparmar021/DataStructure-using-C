#include <stdio.h>
#include <stdlib.h>

void funTail(int n)
{
	if(n>0)
	{
		printf("%d  ", n);   // printing Output : 4 3 2 1
		funTail(n-1);      // Recursively calling function
	}
}

int main()
{
	int a=4;
    funTail(a);   // Calling funTail() function

    return 0;
}
