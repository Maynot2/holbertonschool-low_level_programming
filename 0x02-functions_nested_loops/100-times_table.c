#include "holberton.h"

/**
  * print_space - Print a coma and x many blank spaces
  * @x: A integer
  *
  * Return: void
  *
  */

void print_space(int x)
{
	int i;

	_putchar(',');
	for (i = 0; i < x; i++)
		_putchar(' ');
}

/**
  * times_table - Prints times tables from 0 to n
  * @n: Integer between 0 and 15
  *
  * Return: void
  *
  */

void print_times_table(int n)
{
	int i, j, p;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j; /* product as per time tables 0x0 0x1 0x2... */
				if (j == 0)
				{
					_putchar('0');
				}
				else if ((i * j) > 99)
				{
					print_space(1);
					_putchar('0' + ((p / 10) / 10));
					_putchar('0' + ((p / 10) % 10));
					_putchar('0' + (p % 10));
				}
				else if ((i * j) > 9)
				{
					print_space(2);
					_putchar('0' + (p / 10));
					_putchar('0' + (p % 10));

				}
				else
				{
					print_space(3);
					_putchar('0' + (p % 10));
				}
			}
			_putchar('\n');
		}
	}
}
