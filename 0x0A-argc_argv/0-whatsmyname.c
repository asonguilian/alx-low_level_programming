#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by a new line
  * @argc: number of command line arguments
  * @argv: array that contains the command line arguments
  * Return: default success value in stdlib.
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
