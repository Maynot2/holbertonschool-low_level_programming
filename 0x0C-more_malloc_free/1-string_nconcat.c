#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Computes the size of a string s.
 * @s: A pointer to a string.
 *
 * Return: An unsigned integer.
 *
 */

unsigned int _strlen(char *s)
{
	unsigned int c = 0;

	if (s == NULL)
		return (c);

	while (*(s + c))
		c++;

	return (c);
}

/**
 * string_nconcat - Concatenate 2 strings s1 and s2 up to n bytes of s2.
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 * @n: An unsigned integer.
 *
 * Return: - On success: A pointer to the concatenated string.
 *         - On failure: A NULL pointer.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconc_pt;
	unsigned int i, j;
	unsigned int lens2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	lens2 = (n > _strlen(s2)) ? (_strlen(s2) + 1) : n;

	sconc_pt = malloc(_strlen(s1) + lens2);

	if (sconc_pt == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (s1[i])
		{
			sconc_pt[i] = s1[i];
			i++;
		}
		j = 0;
		while ((j < n) && s2[j])
		{
			sconc_pt[i + j] = s2[j];
			j++;
		}
		sconc_pt[i + j] = '\0';

		return (sconc_pt);
	}
}
