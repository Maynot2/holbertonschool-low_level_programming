#include "holberton.h"

/**
 * print_i - Print a positive number n without using the standard libray
 * @n: A positive integer
 *
 * Return: Void
 *
 */

void printi(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_number - Print a number n without using the standard libray even
 * if larger then int limit
 * @n: An integer
 *
 * Return: Void
 *
 */

void print_number(int n)
{
	int n_p1, n_p2;

	n_p1 = n / 1000000000;
	n_p2 = n % 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n_p1 = -n_p1;
		n_p2 = -n_p2;
	}

	if (n_p1)
		printi(n_p1);
	printi(n_p2);
}
