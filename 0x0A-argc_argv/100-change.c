#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Where the program start.
  * @argc: An integer.
  * @argv: A pointer to an array of strings.
  *
  * Return: Always zero.
  *
  */

int main(int argc, char *argv[])
{
	int amount;
	int c25 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;

	if (argc <= 1 || argc >= 3)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		puts("0");
	}
	else
	{
	c25 += amount / 25;
	amount -= c25 * 25;
	c10 += amount / 10;
	amount -= c10 * 10;
	c5 += amount / 5;
	amount -= c5 * 5;
	c2 += amount / 2;
	amount -= c2 * 2;
	c1 += amount / 1;
	amount -= c1 * 1;

	printf("%d\n", c25 + c10 + c5 + c2 + c1);
	}

	return (0);
}
