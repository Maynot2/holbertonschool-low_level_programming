#include "holberton.h"

/**
  * _puts_recursion - Prints a string s followed by a new line
  * @s: A string.
  *
  * Return: A string.
  *
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
	if (!*s)
		_putchar('\n');
}
