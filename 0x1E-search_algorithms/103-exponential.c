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
 * binary_lookup - Searches for a value in an array of integers using the
 * Binary search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int binary_lookup(int *array, int left, int right, int value)
{
	int middle;

	if (array)
	{
		while (left <= right)
		{
			print_array(array, left, right);

			middle = left + (right - left) / 2;

			if (value > array[middle])
				left = middle + 1;
			if (value < array[middle])
				right = middle - 1;
			if (value == array[middle])
				return (middle);
		}
	}
	return (-1);
}

/**
 * min - Returns smallest of two integers
 *
 * @a: A integer
 * @b: A integer
 *
 * Return: The smallest integer
 */

int min(int a, int b)
{
	return a <= b ? a : b;
}

/**
 * exponential_search - Searches for a value in an array of integers using the
 * Exponential search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound, lo, hi;

	if (array)
	{
		bound = 1;

		while (bound < (int)size && array[bound] < value)
		{
			printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}

		lo = bound / 2;
		hi = min(bound, size - 1);

		printf("Value found between indexes [%d] and [%d]\n", lo, hi);

		return binary_lookup(array, lo, hi, value);
	}
	return (-1);
}
