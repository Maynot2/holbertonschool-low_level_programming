#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starts of the program
 *
 * Return: 0 on success.
 *
 */

int  main(void)
{
	int limit = 2772, total = 0, i = 0;
	int lower = 32, upper = 126;
	char str[50], chr;

	srand(time(0));

	while (total <= limit - upper)
	{
		chr = (rand() % (upper - lower + 1) + lower);
		str[i] = chr;
		total += chr;
		i++;
	}

	str[i] = limit - total;
	str[i + 1] = '\0';

	printf("%s\n", str);

	return (0);
}
