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

	while (*(s + c))
		c++;

	return (c);
}

/**
 * _strchr - Locates a character c in a string s.
 * @s: A pointer to a string.
 * @c: A pointer to a character.
 *
 * Return: A pointer to first occurence of char c in string s.
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= _strlen(s); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
