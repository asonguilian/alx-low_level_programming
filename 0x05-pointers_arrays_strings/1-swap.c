/**
  * swap_int - swaps the values of two integers
  *@a: first param
  *@b: second param
  */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
