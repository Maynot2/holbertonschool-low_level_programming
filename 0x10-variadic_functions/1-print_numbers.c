#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Print an indefinte list of numbers separated by a given
 * separator.
 * @separator: The separator as a string.
 * @n: The number of variadic arguments passed to the function.
 * @...: The list of numbers to be printed.
 *
 * Return: Noting.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arglist);
}
