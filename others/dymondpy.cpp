
#include <stdio.h>
int main()
{
	int n, c, r, space = 1;

	scanf("%d", &n);

	space = (n-1);
	for (r = 1; r <= n; r++)
	{
		for (c = 1; c <= space; c++)
		  printf(" ");
		  space--;
		for (c = 1; c <= 2*r-1; c++)
			printf("*");
		printf("\n");
	}
	
	space = 1;
	for (r = 1; r <=(n-1); r++)
	{
		for (c = 1; c <= space; c++)
		printf(" ");
		space++;
		for (c = 1 ; c <= 2*(n-r)-1; c++)
			printf("*");
		printf("\n");
	}	
	return 0;
}
