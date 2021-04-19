#include "search_algos.h"

/**
 * linear_search -  Searches for a value in an array of integers using the
 * Linear search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
		printf("Value checked array[%lu] = [%d]\n", i, array[i] );
			if (array[i] == value)
				return ((int)i);
		}
	}

	return (-1);
}
