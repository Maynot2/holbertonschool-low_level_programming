#include "holberton.h"

/**
 * more_numbers - Print numbers from 0 to 14, 10 times
 *
 * Return: Void
 *
 */

void more_numbers(void)
{
	int i, c;
	
	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c < 10)
			{
				_putchar(c + 48);
			}
			else
			{
				_putchar('1');
				_putchar(c + 38);
			}
		}

		_putchar('\n');
	}
}
