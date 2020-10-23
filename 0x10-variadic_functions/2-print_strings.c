#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - Prints an undefinite number of strings separated by a given
  * separator.
  * @separator: A string separator given as a string.
  * @n: The number of strings to be printed.
  * ...: The strings to be printed.
  *
  * Return: Nothing.
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	char *str;
	unsigned int i;

	va_start(strlist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strlist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(strlist);
}
