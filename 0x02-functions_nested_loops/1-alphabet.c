#include "functions.h"

/**
 *print_alphabet - prints all the letters of the english alphabets
 *in lower case on a single line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i, n;

	n = 122;
	for (i = 97; i <= n; i++)
		_putchar(i);
	_putchar('\n');
}
