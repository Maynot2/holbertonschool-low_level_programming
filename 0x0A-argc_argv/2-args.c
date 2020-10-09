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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
