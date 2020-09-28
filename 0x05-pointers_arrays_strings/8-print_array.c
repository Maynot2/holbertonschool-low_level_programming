#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Takes an integer array pointer a  and prints the array to n
 * @a: A pointer to an array of integers.
 * @n: An integer
 *
 * Return: Void.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
