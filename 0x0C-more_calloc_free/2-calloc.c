/**
  * _calloc - allocatesmemory using malloc and initilizes it to zero
  * @nmemb: size of array
  * @size: size of each element in array
  * Return: pointer to array or NULL if allocation fails
  * if nmemb or size is zzero, returns NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
