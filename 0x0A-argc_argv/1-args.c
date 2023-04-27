#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints number of arguments passed to it,followed by a new line
  * @argc: number of command line arguments
  * @argv: array that contains the command line arguments
  * Return: default success value in stdlib.
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (EXIT_SUCCESS);
}
