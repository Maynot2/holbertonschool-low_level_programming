#include <unistd.h>

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
	int i = 0;
	unsigned long n1 = 0, n2 = 1, tmp;

	printi(n1);
	_putchar(' ');
	_putchar(',');
	printi(n2);

	while (i < 50)
	{
		tmp = n2;
		n2 += n1;
		n1 = tmp;
		_putchar(' ');
		_putchar(',');
		printi(n2);
		i++;
	}
	_putchar('\n');

	return (0);
}
