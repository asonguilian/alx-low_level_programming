/**
 *_isupper - checks whether a character, c,  is an uppercase character
 *@c: The character to verify
 *
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
