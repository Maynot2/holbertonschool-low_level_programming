#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Computes length of a string s
 * @s: A pointer to a String
 *
 * Return: An integer corrsponding to the string length.
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

/**
 * infinite_add - Add any 2 numbers given as strings n1 and n2 given a
 * dedicated buffer r of size size_r
 * @n1: A pointer to a string.
 * @n2: A pointer to a string.
 * @r: An integer.
 * @size_r: An integer.
 *
 * Return: Void.
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = _strlen(n1) >= _strlen(n2) ? _strlen(n1) - 1 : _strlen(n2) - 1;
	int min_len = _strlen(n1) <= _strlen(n2) ? _strlen(n1) : _strlen(n2);
	char *num_max = _strlen(n1) >= _strlen(n2) ? n1 : n2;
	char *num_min = _strlen(n1) < _strlen(n2) ? n1 : n2;
	int num1, num2, d, sum, ret = 0;

	if (i + 1 >= size_r)
		return (0);

	*(r + i + 2) = '\0';

	while (i >= 0)
	{
		int offset = (min_len - 1) - i;

		num1 = *(num_max + i) - 48;
		num2 = offset >= 0 ? *(num_min + offset) - 48 : 0;
		sum = num1 + num2 + ret;
		d = sum % 10;
		ret = sum >= 10 ? 1 : 0;
		*(r + i + 1) = d + '0';
		i--;
	}

	if (ret)
		*r = 1 + '0';

	if (_strlen(r) >= size_r)
		return (0);
	return (ret ? r : r + 1);
}
