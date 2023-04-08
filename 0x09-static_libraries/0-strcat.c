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
