#include "holberton.h"
#include <stdio.h>

/**
  * _memcpy - Copies n bytes from memory area src to memory area dest
  * @dest: A pointer to a string.
  * @src: A pointer to a string.
  * @n: An integer
  *
  * Return: A pointer to a string.
  *
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
