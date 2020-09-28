#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Takes a source char pointer *dest and copys it to a destination
 * char pointer
 * @src: A pointer to an array of chars.
 * @dest: A pointer to an array of chars.
 *
 * Return: Void.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
