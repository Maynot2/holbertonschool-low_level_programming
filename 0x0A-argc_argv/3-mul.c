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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
