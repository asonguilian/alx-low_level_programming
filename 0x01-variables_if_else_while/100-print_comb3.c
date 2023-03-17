#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n, sep, space;

	i = 48;
	j = 49;
	n = 10;
	sep = 44;
	space = 32;
	while (i <= 56)
	{
		j = 49;
		while (j <= 57)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(sep);
				putchar(space);
			}
			j++;
		}
		i++;
	}
	putchar(n);
	return (0);
}
