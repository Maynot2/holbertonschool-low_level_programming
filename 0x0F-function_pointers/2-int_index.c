#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * int_index - Searches a given array for the first integer that satisfies the
  * condition in callback function cmp.
  * @array: An array of integers.
  * @size: The size of the array as an size_t.
  * @cmp: The callback function to be called on each elements of the array.
  *
  * Return: the found integer on success.
  *         -1 on error.
  *
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
