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
