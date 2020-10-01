#include "holberton.h"
#include <stdio.h>

/**
 * encode - Modify string to 1337
 * @c: A pointer to a character.
 *
 * Return: void
 *
 */

void encode(char *c)
{
	int i;
	char mapping[][2] = {
		{'o', 'O'},
		{'l', 'L'},
		{'\0', '\0'},
		{'e', 'E'},
		{'a', 'A'},
		{'\0', '\0'},
		{'\0', '\0'},
		{'t', 'T'}
	};

	for (i = 0; i < 8; i++)
	{
		if (mapping[i][0] == *c || mapping[i][1] == *c)
		{
			*c = i + '0';
			break;
		}
	}
}

/**
 * leet - Encode string to 1337
 * @s: A pointer to a string.
 *
 * Return: A string.
 *
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		encode(&s[i]);
		i++;
	}

	return (s);
}
