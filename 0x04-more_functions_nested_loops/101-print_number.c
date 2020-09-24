#include "holberton.h"

/**
 * print_number - Print a number n without using the standard libray
 * @n: An integer
 *
 * Return: Void
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
