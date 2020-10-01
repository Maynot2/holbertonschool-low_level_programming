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
 * _strncat - Appends a given number of characters n from one destination
 * string dest to the end of a source string src.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: A integer indicating the number of charcaters to be appended.
 *
 * Return: The pointer to the destination string.
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;
	int srclen = _strlen(src);

	while (dest[i])
		i++;

	for (j = 0; j < n && j < srclen; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
