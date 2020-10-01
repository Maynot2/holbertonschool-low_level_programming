#include "holberton.h"
#include <stdio.h>

/**
 * is_special_char - Tests if a character c is one of ,, ;, ., !, ?, ", (, ),
 * {, and }
 * @c: A character.
 *
 * Return: 1 on success.
 *         0 on error.
 *
 */

int is_special_char(char c)
{
	char special[] = " ,;.!?\"(){}\t";
	int i = 0;

	while (special[i])
	{
		if (special[i] == c)
			return (1);
		i++;
	}
	return (0);
}

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
 * cap_string - Capitalises everyword of a given string s
 * @s: A pointer to a string.
 *
 * Return: A string.
 *
 */

char *cap_string(char *s)
{
	int i = 0;
	int ascof = 32; /* bytes offset between low & uppercase in the ascii table */

	while (s[i])
	{
		if (is_lower(s[i]) && is_special_char(s[i - 1]))
			s[i] -= ascof;
		i++;
	}

	return (s);
}
