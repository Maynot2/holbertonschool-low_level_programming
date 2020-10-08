#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - Return 1 if the strings can be comsidered identical,
 * 0 otherwise.
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		if (wildcmp(s1 + 1, s2) == 1 || wildcmp(s1, s2 + 1) == 1)
			return (1);
	return (0);
}
