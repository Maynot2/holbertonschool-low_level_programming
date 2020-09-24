#include "holberton.h"

/**
 * print_triangle - Print a triangle of base size
 * @size: An integer that set the base's length of the triangle
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
