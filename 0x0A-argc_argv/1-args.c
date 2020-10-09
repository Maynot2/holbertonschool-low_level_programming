#include "holberton.h"
#include <stdio.h>

#define UNUSED(X) (void)(X)

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
	UNUSED(argv);

	printf("%d\n", argc - 1);

	return (0);
}
