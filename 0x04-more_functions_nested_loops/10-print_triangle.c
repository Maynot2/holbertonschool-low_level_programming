#include "holberton.h"

/**
 * print_square - Print a square of side size
 * @size: An integer that set the side's length of the square
 *
 * Return: Void
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - (i + 1); j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
