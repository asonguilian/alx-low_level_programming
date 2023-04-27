#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number of coins needed to make change
  * for an amount of money given
  * @argc: number of command line arguments
  * @argv: array that contains the command line arguments
  * Return: default success value in stdlib.
  */

int main(int argc, char *argv[])
{
	int total, cents, nb25 = 0, nb10 = 0, nb5 = 0, nb2 = 0, nb1 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	if (cents >= 25)
	{
		nb25 = cents / 25;
		cents = cents - (nb25 * 25);
	}
	if (cents >= 10)
	{
		nb10 = cents / 10;
		cents = cents - (nb10 * 10);
	}
	if (cents >= 5)
	{
		nb5 = cents / 5;
		cents = cents - (nb5 * 5);
	}
	if (cents >= 2)
	{
		nb2 = cents / 2;
		cents = cents - (nb2 * 2);
	}
	nb1 = cents;
	total = nb25 + nb10 + nb5 + nb2 + nb1;
	printf("%d\n", total);
	return (EXIT_SUCCESS);
}
