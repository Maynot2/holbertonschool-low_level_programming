#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - takes a string pointer s and return the length of the matching
 * string.
 * @s: A pointer to a string.
 *
 * Return: An integer corresponding to the length of a string.
 *
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

/**
 * _strcpy - Takes a source char pointer *dest and copys it to a destination
 * char pointer
 * @src: A pointer to an array of chars.
 * @dest: A pointer to an array of chars.
 *
 * Return: A pointer to dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
