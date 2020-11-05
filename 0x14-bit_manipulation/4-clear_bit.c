#include "holberton.h"

/**
 * clear_bit - Sets a bit to 0 at a given index index.
 * @n: A unsigned long integer.
 * @index: The given index as an unsigned integer
 *
 * Return: 1 on success
 *        -1 on error.
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
