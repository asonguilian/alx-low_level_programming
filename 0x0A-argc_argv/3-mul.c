#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the result of multiplication, followed by a new line
  * @argc: number of command line arguments
  * @argv: array that contains the command line arguments
  * Return: default success value in stdlib otherwise 1
  */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (EXIT_SUCCESS);
}
