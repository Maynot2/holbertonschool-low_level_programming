#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string s.
 * @s: A string.
 *
 * Return: An integer.
 *
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * wildcmp_rec - Returns 1 if the strings can be considered identical,
 * otherwise 0.
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 * @i: An integer.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int wildcmp_rec(char *s1, char *s2, int i)
{
	{
		if (s1[i] != s2[i])
		{
			if (s2[i] == '*')
				printf("do something else!");
			else
				return (0);
		}

		if (!s1[i])
			return (1);

		return (wildcmp_rec(s1, s2, i + 1));
	}
}

/**
 * wildcmp - Return 1 if the strings can be comsidered identical, 0 otherwise.
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int wildcmp(char *s1, char *s2)
{
	/*
	 * int len_s1 = _strlen_recursion(s1);
	 * int len_s2 = _strlen_recursion(s2);
	 * int longest = len_s1 >= len_s2 ? len_s1 : len_s2;
	 */

	return (wildcmp_rec(s1, s2, 0));
}

