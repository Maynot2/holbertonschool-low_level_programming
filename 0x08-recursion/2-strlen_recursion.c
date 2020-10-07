#include "holberton.h"

/**
  * _strlen_recursion - Returns the length of a string s.
  * @s: A string.
  *
  * Return: An integer.
  *
  */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
