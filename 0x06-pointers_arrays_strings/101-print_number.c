#include "main.h"

/**
  * print_number - prints an intger using putchar
  *@n: integer to be printed
  */

void print_number(int n)
{
	int mag, div, count;

	if (n < 0)
	{
		_putchar(45);
		mag = n * -1;
	}
	else
	{
		mag = n;

	}
	div = mag;
	count = 1;
	while (div > 9)
	{
		div /= 10;
		count *= 10;

	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((mag / count) % 10) + 48);
	}
}
