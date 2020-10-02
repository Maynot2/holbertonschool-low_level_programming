#include "holberton.h"

/**
 * print_number - Print a number n1
 * @n: An integer
 *
 * Return: Void
 *
 */

void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar(n1 % 10 + '0');
}

