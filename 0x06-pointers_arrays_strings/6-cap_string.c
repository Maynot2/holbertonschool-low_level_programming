#include "holberton.h"
#include <stdio.h>
/**
 * _swap_char - Swaps the value of two characters c1 and c2
 * @c1: A pointer to a character
 * @c2: A pointer to a character
 *
 * Return: Void.
 *
 */
/*
void _swap_char(char *c1, char *c2)
{
	int tmp;

	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}
*/

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
/*	char space = ' ';
	char *pts = &space;*/

	while (s[i])
	{
/*		if (s[i] == '\t')
			_swap_char(&s[i], pts); */
		if (is_lower(s[i]) && is_special_char(s[i - 1]))
			s[i] -= ascof;
		i++;
	}

	return (s);
}
