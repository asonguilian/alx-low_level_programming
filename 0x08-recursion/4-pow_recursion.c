/**
  * _pow_recursion - returns the value of x raised to the power y
  *@x: the base
  *@y:  the index
  *Return: value of w raised to the power y
  *returns -1, if y is less than 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
