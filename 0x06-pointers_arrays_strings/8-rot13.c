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
	int i = 0;
	int key = 13;
	int alpha_pos;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			alpha_pos = s[i] - 97;
			alpha_pos = (alpha_pos + key) % 26;
			s[i] = abc[alpha_pos];
		}
		i++;
	}

	return (s);
}
