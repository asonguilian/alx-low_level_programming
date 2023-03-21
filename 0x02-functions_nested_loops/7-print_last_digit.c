#include "functions.h"

/**
 *print_last_digit - prints the last digit of the number n
 *
 *@n: the number whose last digit needs to be printed
 *
 * Return: the calculated value
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l >= 0)
	{
		_putchar('0' + l);
		return (l);
	}
	l = -1 * l;
	_putchar( '0' + l);
	return (l);
}
