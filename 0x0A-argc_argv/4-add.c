#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - Tests if a string s is only made of digits.
 * @s: A pointer to a char.
 *
 * Return: 1 on success.
 *         0 on error.
 *
 */

int isnumber(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (!isdigit(*(s + i)))
			return (0);
		i++;
	}
	return (1);
}

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
		if (isnumber(argv[i]))
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
