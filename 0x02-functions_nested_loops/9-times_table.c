#include "holberton.h"

/**
  * times_table - Prints times tables from 0 to 9
  *
  * Return: void
  *
  */
void times_table(void)
{
	int i, j;
	int result;
	int d, u;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			d = result / 10;
			u = result % 10;

			if (d != 0)
			{
				_putchar('0' + d);
			}
			else
			{
				if (j != 0)
					_putchar(' ');
			}
			_putchar('0' + u);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
