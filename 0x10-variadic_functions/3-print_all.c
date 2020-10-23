#include "variadic_functions.h"
#include <stdio.h>

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
	char *str;
	char type;
	int i = 0;

	va_start(list, format);

	while (format[i])
	{
		type = format[i];
		switch(type)
		{
			case 'c' :
				printf("%c", va_arg(list, int));
				break;
			case 'i' :
				printf("%d", va_arg(list, int));
				break;
			case 'f' :
				printf("%f", va_arg(list, double));
				break;
			case 's' :
				str = va_arg(list, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default :
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
				printf(", ");
		i++;
	}
	printf("\n");

	va_end(list);
}
