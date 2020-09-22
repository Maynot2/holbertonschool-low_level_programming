#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - Prints to 98 from n a given number
  * @n: A natural number
  *
  * Return: void
  *
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d ", n);
			n++;
		}
	}
	 if (n > 98)
	{
		while (n > 98)
		{
			printf("%d ", n);
			n--;
		}
	}
	printf("98\n");
}

