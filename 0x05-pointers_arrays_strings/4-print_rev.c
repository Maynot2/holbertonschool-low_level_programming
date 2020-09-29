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
 * print_rev - takes a string pointer str and prints str to stdout in reverse
 *	@str: A pointer to a string.
 *
 * Return: Void.
 *
 */

void print_rev(char *str)
{
	int i;

	for (i = _strlen(str) - 1; i >= 0; i--)
		_putchar(*(str + i));
	_putchar('\n');
}
