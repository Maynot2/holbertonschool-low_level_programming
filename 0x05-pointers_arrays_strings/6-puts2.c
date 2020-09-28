#include "holberton.h"

/**
 * put2 - Takes a string pointer s and prints every other character followed
 * by a new line.
 * string.
 * @str: A pointer to a string.
 *
 * Return: Void.
 *
 */

void puts2(char *str)
{
	int i;

	while (*(str + i))
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
