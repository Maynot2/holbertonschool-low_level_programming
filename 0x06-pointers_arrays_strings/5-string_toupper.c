#include "holberton.h"
#include <stdio.h>

/**
 * is_lower - Tests if a character c is lower case
 * @c: A character.
 *
 * Return: 1 on success.
 *         0 on error.
 *
 */

int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * string_toupper - Transforms lowercase to upper case in a given string s
 * @s: A pointer to a string.
 *
 * Return: A string.
 *
 */

char *string_toupper(char *s)
{
	int i = 0;
	int ascof = 32; /* bytes offset between low & uppercase in the ascii table */

	while (s[i])
	{
		if (is_lower(s[i]))
			s[i] -= ascof;
		i++;
	}

	return (s);
}
