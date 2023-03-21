#include "functions.h"

/**
 *times_table - prints the 9 times_table starting with 0
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, j, count;

	while (i <= 9)
	{
		j = 0;
		count = 0;
		while (count < 10)
		{
			if (j < 10)
				_putchar('0' + j)
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			count++;
			if (i != 0)
				j += j;
			if ((j < 10) && (count != 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j >= 10) && (count != 10))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		i++;
		_putchar('\n');
	}
}
