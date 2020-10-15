#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * array_range - Creates an array of integers.
  * @min: An integer | The lower limit of the range.
  * @max: An integer | The upper limit of the range.
  *
  * Return: - On success: A pointer at the start of the range.
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
