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
 * is_palindrome_rec - Return 1 if a string n is a palindrome 0 otherwise
 * @s: A pointer to a string.
 * @start: An integer.
 * @end: An integer.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int is_palindrome_rec(char *s, int start, int end)
{
	{
		if (start >= end)
			return (1);
		if (s[start] != s[end])
			return (0);
		return (is_palindrome_rec(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - Return 1 if a string n is a palindrome 0 otherwise
 * @s: A pointer to a string.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int is_palindrome(char *s)
{
	return (is_palindrome_rec(s, 0, _strlen_recursion(s) - 1));
}

