#include "holberton.h"
#include <stdio.h>

/**
 * main - Implementation of the famous Fizz Buzz exercise.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d", i);
	}
	printf("\n");

	return (0);
}
