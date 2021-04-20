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
	int left, middle, right;

	if (array)
	{
		left = 0;
		right = size - 1;

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
