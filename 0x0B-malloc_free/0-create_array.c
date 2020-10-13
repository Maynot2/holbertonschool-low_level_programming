#include <stdlib.h>
#include "holberton.h"

/**
  * create_array - Creates an array of chars of size size and initializes it
  * with a character value c.
  * @size: An unsigned int.
  * @c: A character.
  *
  * Return: A pointer to a character.
  *
  */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(c));
	unsigned int i;

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
		return (arr);
	}
}
