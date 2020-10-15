#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * _realloc - Reallocates a memory block.
  * @ptr: A void pointer to the old memory allocation.
  * @old_size: An unsigned integer representing the old size of the memory
  * allocation
  * @new_size: An unsigned integer representing the new size of the memory
  * to be allocated
  *
  * Return: - On success: A pointer to the  newly reallocated memory.
  *         - On failure: A NULL pointer.
  *
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt_old, *pt_new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}

	pt_new = malloc(new_size);
	if (pt_new == NULL)
		return (NULL);

	if (!ptr)
		pt_old = malloc(old_size);

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			/*printf("pt_old[%d] : %c\n", i, pt_old[i] );*/
			pt_new[i] = pt_old[i];
			/*printf("pt_new[%d] : %c\n", i, pt_new[i] );*/
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			pt_new[i] = pt_old[i];

	return ((void *)pt_new);
}
