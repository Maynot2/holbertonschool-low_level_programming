#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers using
 * the Interpolation search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int left, pos, right;

	if (array)
	{
		left = 0;
		right = size - 1;

		while (left <= right && value >= array[left] && value <= array[right])
		{
			if (left == right)
			{
				if (array[left] == value)
					return (left);
				return (-1);
			}

			pos = left + (((double)(right - left) /
				  (array[right] - array[left])) * (value - array[left]));

			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

			if (value > array[pos])
				left = pos + 1;
			if (value < array[pos])
				right = pos - 1;
			if (value == array[pos])
				return (pos);
		}
		pos = left + (((double)(right - left) /
			  (array[right] - array[left])) * (value - array[left]));
		if (pos >= (int)size)
			printf("Value checked array[%d] is out of range\n", pos);
	}
	return (-1);
}
