#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - where the program starts.
 * @argc : The number of arguments the program takes from the cmdline.
 * @argv : The cmdline arguments as an array of strings.
 *
 * Return: Always 0.
 *
 */

int main(int argc, char **argv)
{
	unsigned char *pf;
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");                                                      
		exit(2); 
	}

	pf = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
			printf("%x\n", pf[i]);
		printf("%x ", pf[i]);
	}

	return (0);
}
