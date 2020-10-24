#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct format_specifier - Specifies a print format.
 * @t: The type of format_specifier.
 * @func: A pointer to a print function.
 *
 * Description: Specifies a print format.
 */


typedef struct format_specifier
{
	char t;
	void (*func)(va_list list);
} fs_t;

int _putchar(int);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
