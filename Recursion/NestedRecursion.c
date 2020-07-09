#include <stdio.h>
#include <stdlib.h>

int funNested(int n)
{
	if (n>100)
	{
		return n-10;
	}
	else
	{
		return funNested(funNested(n+11));  // Recursive call is taking Recursive call as a Parameter ,It is called Nested Recursion
	}
}

int main()
{
    int a=95;
    printf("%d  ", funNested(a));    // Output : 91

 	return 0;
}