#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <ctype.h>

/**
 * print_section - Print a given section of a string.
 * by dots.
 * @s: A pointer to a string
 * @pos: An integer
 * @len: An integer.
 *
 * Return: Void.
 */

void print_section(char *s, int pos, int len)
{
	int i = 0;

	putchar(' ');
	while (i < len)
	{
		if (isprint(*(s + pos + i)))
			putchar(*(s + pos + i));
		else
			putchar('.');
		i++;
	}
}

/**
 * print_buffer - Prints the content of size bytes of the buffer pointed by b
 * @b: A pointer to a string
 * @size: An integer
 *
 * Return: Void.
 */


void print_buffer(char *b, int size)
{
	int i, k = 0;

	for (i = 0; i < (size / 10); i++)
	{
		int j;

		for (j = 0; j < 9; j += 2)
		{
			if (j == 0)
				printf("000000%02x:", i * 10);
			printf(" %02x%02x", *(b + (i * 10) + j), *(b + (i * 10) + j + 1));
		}
		print_section(b, i * 10, 10);
		putchar('\n');
	}
	if (size % 10)
	{
		for (k = 0; k < 9; k++)
		{
			if (k == 0)
				printf("000000%02x:", i * 10);
			if (k < size % 10)
			{
				if (k % 2 == 0)
					printf(" %02x", *(b + (i * 10) + k));
				else
					printf("%02x", *(b + (i * 10) + k));
			}
			if (k >= size % 10)
			{
				printf(k % 2 == 0 ? "   " : "  ");
			}
			if (k == 8)
				printf("  ");
		}
		print_section(b, i * 10, size % 10);
		putchar('\n');
	}
}
