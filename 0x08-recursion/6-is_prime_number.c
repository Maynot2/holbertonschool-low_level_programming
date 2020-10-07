#include "holberton.h"

/**
 * is_prime - Return 1 if number n is not divisible by any number
 * other then itself or 1
 * @i: An integer.
 * @n: An integer.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int is_prime(int i, int n)
{
	if (i == 1)
		return (1);
	if (i <= 0)
		return (0);
	if (n % i == 0)
		return (0);
	return (is_prime(i - 1, n));
}

/**
 * is_prime_number - Return 1 if number n is prime 0 otherwise
 * @n: A integer.
 *
 * Return: 1 on success
 *         0 on error
 *
 */

int is_prime_number(int n)
{
	return (is_prime(n - 1, n));
}
