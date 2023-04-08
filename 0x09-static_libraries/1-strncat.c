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
  * _strncat - concatenates n bytes of src into dest( strings)
  *
  *@src: pointer to input string
  *@dest: pointer to output string
  *@n: number of characters to copy from src and concatenate to dest
  *
  * Return: returns a pointer to a string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int ldest, i;

	ldest = _strlen(dest);

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[ldest + i] = src[i];
	dest[ldest + i] = '\0';
	return (dest);
}
