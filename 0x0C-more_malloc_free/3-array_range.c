#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * array_range - Allocates memory for an array of nmemb elements of size bytes
  * each and sets every memory blocks to 0.
  * @nmemb: An unsigned integer | The number of elements in the array.
  * @size: A unsigned integer | The size of each elments.
  *
  * Return: - On success: A pointer at the start of the  allocated memory.
  *         - On failure: A NULL pointer.
  *
  */

int *array_range(int min, int max)
{
	int *range_pt;
	int amp;
	int i;

	if (min > max)
		return (NULL);

	amp = max - min + 1;

	range_pt = malloc(amp * sizeof(int));
	if (range_pt == NULL)
		return (NULL);

	for (i = 0; i < amp; i++)
		range_pt[i] = min++;

	return (range_pt);
}
