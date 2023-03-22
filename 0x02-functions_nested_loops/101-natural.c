#include <stdio.h>

/**
 * main - calculates and prints the sum of all natural numbers
 *multiple of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
