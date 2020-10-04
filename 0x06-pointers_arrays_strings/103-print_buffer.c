#include <stdio.h>
#include "holberton.h"

/**
  * str_replace - Replaces all escaped character of a string s of size size
  * by dots.
  * @s: A pointer to a string
  * @size: An integer
  *
  * Return: Void.
  */

void str_replace(char *s, int size)
{
	int i = 0;

	while (i < size)
	{
		if (*(s + i) < 32 || *(s + i) > 126)
			*(s + i) = '.';
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

	str_replace(b, size);

	while (i < (size / 10))
	{
		int j = 0;

		while (j < 10)
		{
			if (j == 0)
				printf("%p:", b + (i * 10) + j);
			printf(" %02x%02x", *(b + (i * 10) + j), *(b + (i * 10) + j + 1));
			if (j >= 8)
				printf(" %-.10s", b + (i * 10));
			j += 2;
		}
		putchar('\n');
		i++;
	}
	while (k < 10)
	{
		if (k == 0)
			printf("%p:", b + (i * 10) + k);
		if (k < size % 10)
			printf(" %2x%2x", *(b + (i * 10) + k), *(b + (i * 10) + k + 1));
		if (k >= size % 10)
			printf("     ");
		if (k >= 8)
			printf(" %-.10s", b + (i * 10));
		k += 2;
	}
	putchar('\n');
}
