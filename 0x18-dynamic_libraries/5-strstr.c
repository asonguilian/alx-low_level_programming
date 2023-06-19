/**
  * _strstr - locates a substring
  * @haystack: input string from which to search
  * @needle: substring to search
  * Return: Pointer to beginning of the located substring
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (phaystack);
		haystack = haystack + 1;
	}
	return (0);
}
