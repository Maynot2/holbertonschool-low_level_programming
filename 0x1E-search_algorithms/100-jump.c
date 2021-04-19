#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of integers using the
 * Jump search algorithm
 *
 * @array: A pointer to the first element of the given array
 * @size: A integer representing the size of the array
 * @value: An integer representing the value we are searching for
 *
 * Return: An integer representing the index of the searched value if found
 *         -1 if the searched value is not present or the array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int jump;
	int i, j;

	if (array)
	{
		jump = (int)sqrt(size);

		for (i = 0; i < (int)size; i += jump)
		{
			printf("Value checked array[%d] = [%d]\n",
					i, array[i]);
			if (array[i + jump] >= value)
			{
				printf("Value found between indexes [%d] and [%d]\n",
						i, i + jump);
				for (j = 0; j <= jump; j++)
				{
					printf("Value checked array[%d] = [%d]\n",
							i + j, array[i + j]);
					if (array[i + j] == value)
						return (i + j);
				}
			}
		}
		printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
		i = i - jump;
		if (i < (int)size)
		{
			for (j = 0; i + j < (int)size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", i + j, array[i + j]);
				if (array[i + j] == value)
					return (i + j);
			}
		}
	}
	return (-1);
}
