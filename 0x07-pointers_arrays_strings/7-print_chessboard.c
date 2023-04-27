#include "main.h"

/**
  * print_chessboard - prints the chessboard
  *@a: two dimensional array that represents the array
  */

void print_chessboard(char (*a)[8])
{
	unsigned int i, pos;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			pos = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - pos]);
	}
	_putchar ('\n');
}
