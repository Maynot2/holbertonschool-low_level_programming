#include "variadic_functions.h"

/**
  * sum_them_all - Computes the sum of any numbers of arguments.
  * @n: The number of arguments
  * @...: The arguments.
  *
  * Return: The sum on success.
  *         0 on error.
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	int sum;
	unsigned int i;

	if (n <= 0)
		return (0);

	va_start(arglist, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);

	return (sum);
}
