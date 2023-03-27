#include "main.h"

/**
  *_strlen - returns the length of a string s
  *@s: string whose length will be returned
  *
  * Return: the length of the string s
  */

int _strlen(char *s)
{
	char *p;
	int l;

	p = s;
	l = 0;
	while (*p != '\0')
	{
		l++;
		p++;
	}
	return (l);
}

/**
 * print_rev - prints a string in reverse followed
  *by a new line
  *@s: string to be printed
  */

void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	l = l - 1;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
