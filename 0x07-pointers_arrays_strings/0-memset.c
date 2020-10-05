#include "holberton.h"

/**
  * _memset - Fills a string s with a constant byte b up to an address n.
  * @s: A pointer to a string.
  * @b: A character.
  * @n: An integer
  *
  * Return: A pointer to a string.
  *
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
