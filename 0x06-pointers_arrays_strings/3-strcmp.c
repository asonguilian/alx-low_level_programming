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
  * _strcmp - compares two strings
  *
  *@s1: pointer to input string
  *@s2: pointer to output string
  *
  * Return: <0 if s1 < s2
  * 0 if s1 == s2
  * >0 if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{
	int l1, l2, i, n;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (l1 <= l2)
		n = l1;
	else
		n = l2;
	for (i = 0; i < n; i++)
	{
		if (s1[i] < s2[i])
			return (-1215225);
		else if (s1[i] > s2[i])
			return (1215225);
	}
	if (l1 < l2)
		return (-4);
	else if (l1 > l2)
		return (4);
	return (0);
}
