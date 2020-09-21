#include "holberton.h"

/**
  * _abs - Returns the absolute value of a number n
  * @n: The number to be computed
  *
  * Return: n if n > 0
  *         0 if = 0
  *        -n if n < 0
  *
  */
int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n < 0)
		return (-n);
	return (0);
}

/**
  * print_last_digit - Prints the last digit of a number n
  * @n: The number to be computed
  *
  * Return: Last digit (positive integer)
  *
  */
int print_last_digit(int n)
{
	int ld = (_abs(n) % 10);

	_putchar('0' + ld);

	return (ld);
}
