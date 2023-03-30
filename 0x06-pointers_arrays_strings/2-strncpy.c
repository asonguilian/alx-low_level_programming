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
  * _strncpy - copies  two strings
  *
  *@src: pointer to input string
  *@dest: pointer to output string
  *@n: copies exactly n characters of src into dest
  *
  * Return: returns a pointer to a string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int  i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
