#include "holberton.h"

/**
 * test_sqrt - Computes the square root of n.
 * @i: An integer.
 * @n: An integer.
 *
 * Return: An integer.
 *
 */

int test_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if ((i * i) / 2 >= n)
		return (-1);
	return (test_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - Computes the square root of a number n.
 * @n: A integer.
 *
 * Return: An integer.
 *
 */

int _sqrt_recursion(int n)
{
	return (test_sqrt(0, n));
}
