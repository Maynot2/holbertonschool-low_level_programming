#include "holberton.h"

/**
  * print_last_digit - Prints the last digit of a number n
  * @n: The number to be computed
  *
  * Return: Last digit (positive integer)
  *
  */
int print_last_digit(int n)
{
	int ld = (n % 10);

	if (ld < 0)
		ld = -ld;
	_putchar('0' + ld);

	return (ld);
}
