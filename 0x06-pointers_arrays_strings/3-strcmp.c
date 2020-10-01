#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - takes a string pointer s and return the length of the matching
 * string.
 * @s: A pointer to a string.
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

/**
 * _strcmp - Compares if two string s1 and s2 are identical
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 *
 * Return: 0 if string are identical.
 *         An integer equal to the difference between the ASCII code of
 *         the first different character
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;
	int s1_len = _strlen(s1), s2_len = _strlen(s2);
	int longest = s1_len >= s2_len ? s1_len : s2_len;

	for (i = 0; i < longest; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}
