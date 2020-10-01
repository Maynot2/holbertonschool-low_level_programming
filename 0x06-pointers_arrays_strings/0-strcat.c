#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Computes the length of a string s.
 * @s: A pointer to a string.
 *
 * Return: An integer corresponding to the length of the string.
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
 * _strcat - Concatenates two strings dest and source.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: The pointer to the destination string.
 *
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < _strlen(src); j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
