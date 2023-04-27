#include "functions.h"

/**
 *jack_bauer - prints every minute of the day in Bauer's life
 *
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h, m, i, d, j;

	m = 59;
	h = 23;
	for (i = 0; i <= h; i++)
	{
		for (j = 0; j <= m; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				d = i / 10;
				_putchar('0' + d);
				d = i % 10;
				_putchar('0' + d);
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				d = j / 10;
				_putchar('0' + d);
				d = j % 10;
				_putchar('0' + d);
			}
			_putchar('\n');
		}
	}
}
