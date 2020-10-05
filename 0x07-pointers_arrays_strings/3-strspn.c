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
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to a string.
 * @accept: A pointer to a string.
 *
 * Return: An integer corresponding to number of time characters in accep.
 * are found.
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int c = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				c++;
			j++;
		}
		if (i == 1 && c == 0)
			break;
		if (i > c)
			break;
		i++;
	}
	return (c);
}
