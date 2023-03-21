#include "functions.h"

/**
 *_abs -calculates the absolute value of an integer n
 *
 *@n: the number whose absolute value needs to ba claculated
 *
 * Return: the calculated value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
