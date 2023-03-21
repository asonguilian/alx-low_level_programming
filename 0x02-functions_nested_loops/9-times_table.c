#include "functions.h"

/**
 *times_table - prints the 9 times_table starting with 0
 *
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r, i, d, j;

	for (i = 1; i <= 10; i++)
	{
		_putchar('0');
		if (i != 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	for (i = 1; i <= 9; i++)
	{
		d = 9 * i;
		for (j = 0; j <= d; j += i)
		{
			if (j < 10)
				_putchar('0' + j);
			else
			{
				r = j / 10;
				_putchar('0' + r);
				r = j % 10;
				_putchar('0' + r);
			}
			if (j != d)
			{
				r = (j + i) / 10;
				if (r == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}
