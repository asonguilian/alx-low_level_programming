#include <stdio.h>
/**
  * main - prints numbers from 1 to 100
  * replace miltiples of 3 by Fizz and multiples of 5 by Buzz
  * multiples of both 3 and 5 are replaced by "FizzBuzz"
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
