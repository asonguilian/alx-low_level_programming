#include "functions.h"
#include <stdio.h>

/**
 *print_to_98 - prints all the natural numbers from n to 98
 *
 *@n: number from which to start printing
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d", i);
				if (i != 98)
					printf(", ");
			}
			printf("\n");
		}
		else
			printf("98\n");
	}
}
