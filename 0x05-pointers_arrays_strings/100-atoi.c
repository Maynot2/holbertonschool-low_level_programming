#include "holberton.h"
#include <stdio.h>

/**
 * is_num - Takes a character c and tests if it a number charcter or not
 * @c: A character.
 *
 * Return: 1 on succes.
 *         0 on error.
 *
 */

int is_num(char c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}

/**
 * computable_len - Takes a string pointer s and return the length of the
 * string to the first last digit
 * @s: A pointer to a string.
 *
 * Return: An integer.
 *
 */

int computable_len(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		c++;
		if (is_num(*(s + c)) && !is_num(*(s + c + 1)))
			break;
	}

	return (c);
}

/**
 * _pow - Computes n to the power of exp
 * @n: A integer.
 * @exp: An integer.
 *
 * Return: an integer.
 *
 */

int _pow(int n, int exp)
{
	int res = 1, i;

	for (i = 0; i < exp; i++)
	{
		res *= n;
	}

	return (res);
}

/**
 * _atoi - Takes a char pointer s and converts it into an int
 * @s: A pointer to an array of chars.
 *
 * Return: on succes an integer.
 *         on error 0.
 *
 */

int _atoi(char *s)
{
	int i = 0, c = 0, result = 0;
	int len = computable_len(s);
	int *ptres = &result;

	for (i = 0; i <= computable_len(s); i++)
	{
		if (*(s + i) == '-')
			c++;
		if (*(s + i) >= 48 && *(s + i) < 58)
		{
			*ptres  = *ptres + (*(s + i) - 48) * _pow(10, len);
		}
		len--;
	}

	if (c % 2 != 0)
		result = -result;

	return (result);
}
