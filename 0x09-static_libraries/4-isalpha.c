/**
 *_isalpha - checks whether a character, c,  is a letter
 *lower case or  uppercase character
 *@c: The character to verify
 *
 * Return: 1 if c i uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
