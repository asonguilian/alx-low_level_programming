#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, n, sep, space;

	i = 48;
	j = 49;
	k = 50;
	n = 10;
	sep = 44;
	space = 32;
	while (i <= 55)
	{
		j = 49;
		while (j <= 56)
		{
			k = 50;
			while (k <= 57)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(sep);
					putchar(space);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(n);
	return (0);
}
