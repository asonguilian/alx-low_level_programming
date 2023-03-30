/**
  * reverse_array - reverses the content of an array of integers
  *@a: pointer to array
  *@n: number of elements in the array
  */

void reverse_array(int *a, int n)
{
	int i, temp, mid;

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
	}
}
