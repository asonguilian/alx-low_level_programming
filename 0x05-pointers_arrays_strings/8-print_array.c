#include <stdio.h>

/**
  *print_array - print elements of an array of integers
  *@a: pointer to array
  *@n: number of elements to be printed
  */

void print_array(int *a, int n)
{
	int *p = a;
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d", *p);
		p++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
