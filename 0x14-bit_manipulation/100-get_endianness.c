#include "holberton.h"

/**
 * get_endianness -  Checks the endianness of a computer.
 *
 * Return: 1 if big endian.
 *         0 if little endian.
 *
 */

int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	else 
		return (0);
}
