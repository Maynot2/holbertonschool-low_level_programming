#include <unistd.h>
#include "holberton.h"

/**
  * printi - Prints a positive integer character by character recursivly
  * @n: A positive Integer
  *
  * Return: void
  *
  */
void printi(unsigned long n)
{
	if (n / 10)
		printi(n / 10);
	_putchar('0' + (n % 10));
}

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 0;
	unsigned long n1 = 1, n2 = 2, tmp, result = 2;

	while (i < 30)
	{
		tmp = n2;
		n2 += n1;
		n1 = tmp;
		if (n2 % 2 == 0)
			result += n2;
		i++;
	}
	printi(result);
	_putchar('\n');

	return (0);
}
