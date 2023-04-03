/**
  * print_diagsums - prints the sum of the two diagonals
  * of a sqaure matrix of integers
  * @a: 2-dim square matrix of integers
  * @size: size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int i, suml = 0, sumr = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			suml += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sumr += *(a + i);
	}
	printf("%d, %d\n", suml, sumr);
}
