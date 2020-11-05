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
 * flip_bits - Computes the number of bits you would need to flip to get from
 * one number to another.
 * @n: An unsigned long integer.
 * @m: An unsigned long integer.¬
 *
 * Return: Count of flipped bits.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int max = n >= m ? n : m;
	unsigned long int min = n < m ? n : m;
	unsigned long int bit_max, bit_min;
	int i;

	for (i = bin_len(max); i >= 0; i--)
	{
		bit_max = get_bit(max, i);
		bit_min = get_bit(min, i);
		if (bit_max ^ bit_min)
			count++;
	}

	return (count);
}
