#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * malloc_checked - Allocates memory using malloc given an unsigned integer b.
  * @b: An unsigned integer | the allocation size in bytes.
  *
  * Return: - On success: A void pointer to the allocated memory.
  *         - On failure: Exit the program with a status of 98.
  *
  */

void *malloc_checked(unsigned int b)
{
	void *pt = malloc((size_t)b);

	if (pt == NULL)
		exit(98);
	else
		return (pt);
}
