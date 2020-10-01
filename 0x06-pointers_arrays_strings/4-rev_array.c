#include "holberton.h"
#include <stdio.h>

/**
 * _sawp - Swaps the value of two integers n1 and n2
 * @n1: A pointer to an integer
 * @n2: A pointer to an integer
 *
 * Return: Void.
 *
 */

void _swap(int *n1, int *n2)
{
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * reverse_array - Reverses an array a given its length n.
 * @a: A pointer to an array of integers.
 * @n: An integer corresponding to the length of the array;
 *
 * Return: Void.
 *
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		_swap(&a[i], &a[j]);
		j--;
	}
}
