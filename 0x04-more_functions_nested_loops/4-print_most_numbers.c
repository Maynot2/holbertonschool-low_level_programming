#include "holberton.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 expect for 2 and 4
 *
 * Return: Void
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}