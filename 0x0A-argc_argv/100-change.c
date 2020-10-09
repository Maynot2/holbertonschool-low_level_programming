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
	int amount, i;
	int c = 0;
	int val[] = {25, 10, 5, 2, 1};

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
		for (i = 0; i < 5; i++)
		{
			c += amount / val[i];
			amount = amount % val[i];
		}
	printf("%d\n", c);
	}

	return (0);
}
