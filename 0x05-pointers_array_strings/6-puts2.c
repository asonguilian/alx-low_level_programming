#include "main.h"

/**
  * puts2 - prints evvery other character of a string
  * followed by a new line to stdout
  *@str: string to be printed
  */

void puts2(char *str)
{
	char *p = str;
	int i = 0;

	while (*p != '\0')
	{
		if (i % 2 == 0)
			_putchar(*p);
		p++;
		i++;
	}
	_putchar('\n');
}
