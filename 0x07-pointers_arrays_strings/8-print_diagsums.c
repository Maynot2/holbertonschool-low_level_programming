#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of each diagonals in a matrix
 * @a: A pointer to a an array.
 * @size: A integer.
 *
 * Return: Viod.
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size * size + 1; i += (size + 1))
		diag1 += *(a + i);
	for (i = (size * size - 1) - (size - 1); i > 0; i -= (size - 1))
		diag2 += *(a + i);

	printf("%d, %d\n", diag1, diag2);
}
