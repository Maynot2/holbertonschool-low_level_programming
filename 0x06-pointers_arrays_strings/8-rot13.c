#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Encode a string in hyphenated ROT-13
 * @s: A pointer to a string.
 *
 * Return: A string.
 *
 */

char *rot13(char *s)
{
	int i = 0, j;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char abc13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (s[i] != abc[j])
			j++;
		if (j < 52)
			s[i] = abc13[j];
		i++;
	}
	return (s);
}
