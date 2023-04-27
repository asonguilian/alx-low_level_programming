/**
  *cap_string - capitalizes all words of a string
  *@s: input string
  * Return: capitalized input string
  */

char *cap_string(char *s)
{
	int i;
	char c;

	i = 0;
	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		c = s[i];
		if (c == 32 || c == 9 || c == 10 || c == 44 ||
				c == 59 || c == 46 ||
				c == 33 || c == 63 ||
				c == 34 || c == 40 ||
				c == 41 || c == 123
				|| c == 125)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}

