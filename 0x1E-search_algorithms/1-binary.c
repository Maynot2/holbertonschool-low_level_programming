#include "search_algos.h"

/**
 * print_array - Prints an array of given size
 *
 * @array: A pointer to the first element of the given array
 * @size: An integer representing the size of the array
 *
 * Return: Nothing
 */

void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search_rec - Searches for a value in an array of integers using the
 * Binary search algorithm in its recursive form
 *
 * @array: A pointer to the first element of the given array
 * @left: A integer representing the index of the most left array element
 * @right: A integer representing the index of the most right array element
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int binary_search_rec(int *array, int left, int right, int value)
{
	int middle;

	printf("Searching in array: ");
	print_array(array + left, right - left + 1);

	if (right >= left)
	{
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (value < array[middle])
			return (binary_search_rec(array, left, middle - 1, value));
		return (binary_search_rec(array, middle + 1, right, value));
	}

	return (-1);
}

/**
 * binary_search - Searches for a value in an array of integers using the
 * Binary search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (binary_search_rec(array, 0, (int)size - 1, value));

	return (-1);
}
