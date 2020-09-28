#include "holberton.h"

/**
  * _puts - takes a string pointer str and prints str to stdout
  *	@str: A pointer to a string.
  *
  * Return: Void.
  *
  */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
