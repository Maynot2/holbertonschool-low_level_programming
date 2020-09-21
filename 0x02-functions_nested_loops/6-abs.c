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
