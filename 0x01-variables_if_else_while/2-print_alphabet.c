#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, n;

	c = 97;
	n = 10;
	while ( c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(n);
	return (0);
}
