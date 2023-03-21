#include "functions.h"

/**
 *print_alphabet_x10 - prints all the letters of the english alphabets
 *in lower case on a single line
 *ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, n, j;

	n = 122;
	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= n; i++)
			_putchar(i);
		_putchar('\n');
	}
}
