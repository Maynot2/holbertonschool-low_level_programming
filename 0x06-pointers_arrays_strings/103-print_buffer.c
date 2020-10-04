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
	int i = 0, k = 0;

	while (i < (size / 10))
	{
		int j = 0;

		while (j < 10)
		{
			if (j == 0)
				printf("000000%02x: ", i * 10);
			printf("%02x%02x ", *(b + (i * 10) + j), *(b + (i * 10) + j + 1));
			if (j >= 8)
				print_section(b, i * 10, 10);
			j += 2;
		}
		putchar('\n');
		i++;
	}
	while (k < 10)
	{
		if (k == 0)
			printf("000000%02x: ", i * 10);
		if (k < size % 10)
			printf("%02x%02x ", *(b + (i * 10) + k), *(b + (i * 10) + k + 1));
		if (k >= size % 10)
			printf("     ");
		if (k >= 8)
			print_section(b, i * 10, size % 10);
		k += 2;
	}
	putchar('\n');
}
