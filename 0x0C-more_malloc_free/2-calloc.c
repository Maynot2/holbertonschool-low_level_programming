#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * _calloc - Allocates memory for an array of nmemb elements of size bytes
  * each and sets every memory blocks to 0.
  * @nmemb: An unsigned integer | The number of elements in the array.
  * @size: A unsigned integer | The size of each elments.
  *
  * Return: - On success: A pointer at the start of the  allocated memory.
  *         - On failure: A NULL pointer.
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_pt;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr_pt = malloc((nmemb + 1) * size);

	if (arr_pt == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{
			if (size > 1)
				arr_pt[i] = 0;
			else
				arr_pt[i] = '\0';
		}
		arr_pt[i] = NULL;

		return (arr_pt);
	}
}
