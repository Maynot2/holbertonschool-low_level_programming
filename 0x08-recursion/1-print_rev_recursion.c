#include "holberton.h"

/**
  * _print_rev_recursion - Prints a string s in reverse followed by a new line
  * @s: A string.
  *
  * Return: Void.
  *
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
