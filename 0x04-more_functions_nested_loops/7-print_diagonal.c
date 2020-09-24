#include "holberton.h"

/**
 * print_diagonal - Print a diagonal line given an integer n
 * @n: An integer that set the length of the diagonal
 *
 * Return: Void
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
