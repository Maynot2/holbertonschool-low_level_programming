#include "search_algos.h"

/**
 * print_array - Prints an array between 2 indexes
 *
 * @array: A pointer to the first element of the given array
 * @left: An integer representing the left most index
 * @right: An integer representing the right most index
 *
 * Return: Nothing
 */

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (i == right)
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

	print_array(array, left, right);

	if (right >= left)
	{
		middle = left + (right - left) / 2;

		if (array[left] == value)
			return (left);

		if (array[middle] == value && array[middle - 1] != value)
			return (middle);

		if (value <= array[middle])
			return (binary_search_rec(array, left, middle, value));

		return (binary_search_rec(array, middle + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in an array of integers using the
 * Binary search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (binary_search_rec(array, 0, (int)size - 1, value));

	return (-1);
}
