#include <unistd.h>
#include "holberton.h"

/**
  * printi - Prints a positive integer character by character recursivly
  * @n: A positive Integer
  *
  * Return: void
  *
  */
void printi(int n)
{
	if (n / 10)
		printi(n / 10);
	_putchar((n % 10) + '0');
}

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
	int i;
	int r = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			r += i;
	}
	printi(r);
	_putchar('\n');

	return (0);
}
