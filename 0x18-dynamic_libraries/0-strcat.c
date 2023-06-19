#include "main.h"
/**
  * _strcat - concatenats two strings
  *
  *@src: pointer to input string
  *@dest: pointer to output string
  *
  * Return: returns a pointer to a string dest
  */

char *_strcat(char *dest, char *src)
{
	int ldest, lsrc, i;

	ldest = _strlen(dest);
	lsrc = _strlen(src);

	for (i = 0; i < lsrc; i++)
		dest[ldest + i] = src[i];
	dest[ldest + i] = '\0';
	return (dest);
}
