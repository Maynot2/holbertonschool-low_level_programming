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
 * _strncpy - Copies a source string src to a destination string dest up to
 * n number of characters
 * @src: A pointer to an array of chars.
 * @dest: A pointer to an array of chars.
 * @n: A integer representing the number of characters to be copied.
 *
 * Return: A pointer to dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';


	return (dest);
}
