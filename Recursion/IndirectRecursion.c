#include <stdio.h>
#include <stdlib.h>

void funA(int n)
{
	if (n>0)
	{
		printf("%d ", n);
		funB(n-1);   // calling Recursively function funB
	}
}

void funB(int n)
{
	if (n>0)
	{
		printf("%d ", n);
		funA(n/2);    // calling Recursively function funA
	}
}


int main()
{
	int a=20;
    funA(a);   // Calling funA() function

    // Final Output : 20 19 9 8 4 3 1
    
    return 0;
}
