#include "holberton.h"

/**
 * _strlen - Computes the size of a string s.
 * @s: A pointer to a string.
 *
 * Return: A integer.
 *
 */

int _strlen(const char *s)
{
	unsigned int c = 0;

	if (s == NULL)
		return (c);

	while (*(s + c))
		c++;
	return (c);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A binary number as a string.
 *
 * Return: An unsigned integer.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int bit_val = 1;
	int i;

	if (!b)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			sum += bit_val;
		bit_val *= 2;
	}
	return (sum);
}
