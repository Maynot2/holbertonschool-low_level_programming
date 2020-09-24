#include "holberton.h"

/**
 * print_square - Print a square of side size
 * @size: An integer that set the side's length of the square
 *
 * Return: Void
 *
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
