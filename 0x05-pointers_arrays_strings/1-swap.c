#include "holberton.h"

/**
  * swap_int - takes 2 int pointers a and b  and swaps there values.
  *	@a: A pointer to an int.
  * @b: A pointer to an int.
  *
  * Return: void.
  *
  */

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
