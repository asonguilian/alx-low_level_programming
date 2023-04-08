/**
  * _strspn - gets the length of prefix substring
  * @s: initial string from which to check prefix
  * @accept: prefix substring
  * Return: the number of bytes in hte intial segment of s
  * which consit only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			break;
	}
	return (i);
}
