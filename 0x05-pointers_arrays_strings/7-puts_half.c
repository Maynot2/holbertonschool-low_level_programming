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
 * puts_half - Takes a string pointer s and prints half of the string followed
 * by a new line.
 * @str: A pointer to a string.
 *
 * Return: Void.
 *
 */

void puts_half(char *str)
{
	int i, sl = _strlen(str);
	char *start;

	start = str;

	for (i = 0; i < sl / 2; i++)
		start++;

	if ((sl + 1) % 2 == 0)
		start++;

	i = 0;

	while (*(start + i))
	{
		_putchar(*(start + i));
		i++;
	}
	_putchar('\n');
}
