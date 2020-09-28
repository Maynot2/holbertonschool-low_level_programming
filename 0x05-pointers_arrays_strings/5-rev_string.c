#include "holberton.h"

/**
 * _strlen - takes a string pointer s and return the length of the matching
 * string.
 *	@s: A pointer to a string.
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
 * rev_string - Takes a string pointer s and reverses the string
 * @s: A pointer to a string.
 *
 * Return: Void.
 *
 */

void rev_string(char *s)
{
	int i, slen = _strlen(s);
	char *start, *end, tmp;

	end = s;
	start = s;
	
	for (i = 0; i < slen - 1; i++)
		end++;

	for (i = 0; i < slen / 2; i++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
