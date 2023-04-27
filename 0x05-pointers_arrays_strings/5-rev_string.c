#include "main.h"
#include <stdio.h>

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
 * rev_string - reverses a string
  *@s: input string
  */

void rev_string(char *s)
{
	int l, i;
	char temp;

	l = _strlen(s);
	for (i = 0; i < (l / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + l - i - 1);
		*(s + l - i - 1) = temp;
	}
}
