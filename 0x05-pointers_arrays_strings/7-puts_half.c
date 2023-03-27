#include "main.h"

/**
  * puts_half - prints half of a string
  * followed by a new line
  *@str: input string
  */

void puts_half(char *str)
{
	int i, n, l = 0;
	char *p = str;

	while (*(str + l) != '\0')
		l++;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;
	for (i = n; i < l; i++)
		_putchar(*(p + i));
	_putchar('\n');
}
