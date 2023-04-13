#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: first elmentof the array
  * @max: last element of the array
  * Return: pointer to the array
  * if min > max, return NULL.
  * if allocation fails, return NULL
  */

int *array_range(int min, int max)
{
	int *tab
	int i, value = min;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(*tab) * ((max - min) + 1));

	if (tab == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		tab[i] = value;
		value++;
	}

	return (tab);
}

