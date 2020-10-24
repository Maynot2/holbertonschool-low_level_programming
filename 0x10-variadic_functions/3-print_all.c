#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_c - Prints a character.
  * @l: A list of elements.
  *
  * Return: Nothing.
  *
  */

void print_c(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
  * print_i - Prints an integer.
  * @l: A list of elements.
  *
  * Return: Nothing.
  *
  */

void print_i(va_list l)
{
	printf("%d", va_arg(l, int));
}

/**
  * print_f - Prints a float.
  * @l: A list of elements.
  *
  * Return: Nothing.
  *
  */

void print_f(va_list l)
{
	printf("%f", va_arg(l, double));
}

/**
  * print_s - Prints a string.
  * @l: A list of elements.
  *
  * Return: Nothing.
  *
  */

void print_s(va_list l)
{
	printf("%s", va_arg(l, char *));
}

/**
  * print_all - Prints all variadic arguments given their type.
  * @format: A string defining the types.
  * ...: The arguments  to be printed.
  *
  * Return: Nothing.
  *
  */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	fs_t elements[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(list, format);

	i = 0;
	while (format[i])
	{
		j = 0;
		while (elements[j].t)
		{
			if (elements[j].t == format[i])
			{
				elements[j].func(list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
