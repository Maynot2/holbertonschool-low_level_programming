#include "holberton.h"

/**
 * bin_len - Computes the length of the binary convertion of an unsigned long
 * integer.
 * @num: An unsigned long integer
 *
 * Return: the length of the binary.
 *
 */
/**
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
**/

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
