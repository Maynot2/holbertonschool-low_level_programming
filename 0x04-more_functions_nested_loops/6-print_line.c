#include "holberton.h"

/**
 * print_line - Print consecutive lines given n the number of times a line
 * should be printed
 * @n: The number of times a line should be printed
 *
 * Return: Void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
