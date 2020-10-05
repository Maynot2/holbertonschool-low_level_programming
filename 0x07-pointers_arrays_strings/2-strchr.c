#include "holberton.h"
#include <stdio.h>

/**
  * _strchr - Locates a character c in a string s.
  * @s: A pointer to a string.
  * @c: A pointer to a character.
  *
  * Return: A pointer to first occurence of char c in string s.
  *
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);

}
