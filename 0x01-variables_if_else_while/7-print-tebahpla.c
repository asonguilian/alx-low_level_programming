#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, n;

	c = 122;
	n = 10;
	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar(n);
	return (0);
}
