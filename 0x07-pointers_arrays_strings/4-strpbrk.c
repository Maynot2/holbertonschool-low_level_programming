#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 * bytes in the string accept.
 * @s: A pointer to a string.
 * @accept: A pointer to a string.
 *
 * Return: A pointer to a string.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return ((s + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
