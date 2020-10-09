#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	if (argc < 2)
		puts("0");
	else
		printf("%d\n", sum);

	return (0);
}
