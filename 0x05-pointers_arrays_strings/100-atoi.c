#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - Tests if a character c is a digit
 * @c: The character to be tested
 *
 * Return: on success 1
 *         on error 0
 *
 */

int _isdigit(int c)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (c == d)
			return (1);
	}

	return (0);
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

	while (*(s + i))
	{
		if (*(s + i) == '-')
			c++;
		if (_isdigit(*(s + i)))
		{
			if (c % 2 != 0)
				result = result * 10 -(*(s + i) - 48);
			else
				result = result * 10 +  (*(s + i) - 48);
		}
		if (_isdigit(*(s + i)) && !_isdigit(*(s + i + 1)))
			break;
		i++;
	}
	return (result);
}
