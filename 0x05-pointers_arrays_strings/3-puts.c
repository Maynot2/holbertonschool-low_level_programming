#include "holberton.h"

/**
  * _puts - takes a string pointer s and prints s to stdout
  *	@s: A pointer to a string.
  *
  * Return: Void.
  *
  */

void _puts(char *str)
{
	int i = 0;

	while(*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
