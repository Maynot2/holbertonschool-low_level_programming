#include "holberton.h"

/**
  * _pow_recursion - Computes a number x to the power of a number y.
  * @x: A integer.
  * @y: A integer
  *
  * Return: An integer.
  *
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x < 0 && y % 2 == 0)
		x = -x;

	return (x * _pow_recursion(x, y - 1));
}
