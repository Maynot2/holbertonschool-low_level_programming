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
 * _strstr - Finds the first occurrence of the substring needle in string
 * haystack
 * @haystack: A pointer to a string.
 * @needle: A pointer to a string.
 *
 * Return: A pointer to a string on success.
 *         NULL on error
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	int nd_len = _strlen(needle);

	while (*(haystack + i))
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j))
		{
			if (nd_len - 1 == j)
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
