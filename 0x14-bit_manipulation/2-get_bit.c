#include "holberton.h"

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
	if (index > 63)
		return (-1);

	return ((n & (1 << index)) >> index);
}
