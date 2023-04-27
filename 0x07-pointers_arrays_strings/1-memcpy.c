/**
  * _memcpy - copies n bytes of memory area from src to dest
  * @dest:  deestination memory area
  * @src:  source memory area
  * @n: number of bytes to be copied
  * Return: the pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
