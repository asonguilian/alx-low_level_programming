#include "functions.h"

/**
 *_islower - checks whether a character, c,  is a lowercase character
 *@c: The character to verify
 *
 * Return: 1 if c i lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
