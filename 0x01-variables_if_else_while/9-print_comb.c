#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n, sep, space;

	i = 48;
	n = 10;
	sep = 44;
	space = 32;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(sep);
			putchar(space);
		}
		i++;
	}
	putchar(n);
	return (0);
}
