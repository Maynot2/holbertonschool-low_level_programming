#include "holberton.h"

/**
 * print_binary - Prints the positive interger into binary number.
 * @n: A unsigned long integer to be printed as a binary
 *
 * Return: Nothing.
 *
 */

void print_binary(unsigned long int n)
{
	int i, curr_bit;
	int istoprint = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (i = 31; i >= 0; i--)
	{
		curr_bit = n >> i;

		if (curr_bit & 1)
		{
			_putchar('1');
			istoprint = 1;
		}
		else
		{
			if (istoprint)
				_putchar('0');
		}
	}
}
