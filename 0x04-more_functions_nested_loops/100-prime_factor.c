#include "holberton.h"
#include <stdio.h>

/**
 * isprime - Test if a number n is prime
 * @n: An integer
 *
 * Return: 1 if prime
 *         0 if not
 *
 */


int isprime(unsigned long n)
{
	unsigned long i, prime = 1;

	for (i = 2; i < n - 1; i++)
	{
		if (n % i == 0)
			prime = 0;
	}

	return (prime);
}

/**
 * main - Where the program starts
 *
 * Return: Void
 *
 */

int main(void)
{
	unsigned long num = 612852475143, i;

	while (num % 2 == 0)
	{
		num /= 2;
	}
	for (i = 3; i < num - 1; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	printf("%ld\n", num);

	return (0);
}
