#include "holberton.h"

/**
 * bin_len - Computes the length of the binary convertion of an unsigned long
 * integer.
 * @num: An unsigned long integer
 *
 * Return: the length of the binary.
 *
 */

unsigned int bin_len(unsigned long int num)
{
	unsigned int len = 0;

	if (num == 0)
		return (1);

	while (num / 2)
	{
		len++;
		num /= 2;
	}
	if (num % 2)
		len++;
	return (len);
}

/**
 * get_bit - Computes the value of a bit at a given index.
 * @n: A unsigned long integer.
 * @index: The given index as an unsigned integer
 *
 * Return: the value of the bit at the given index on success
 *         -1 on error.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= bin_len(n))
		return (-1);

	return ((n & (1 << index)) >> index);
}
