/**
  *more_numbers - print the numbers from 0 to 14 ten times
  *
  */
void more_numbers(void)
{
	int i, c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_puchar((i / 10) + 48);
			_putchar((1 % 10) + 48);
		}
		_putchar('\n');
	}

}

