/**
  * _strcpy - copies the string src to the string dest
  *@dest: pointer to which the string is copied
  *@src: pointer to the string to be copied
  * Return: the pointer dest
  */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
