#include <stdio.h>

/**
  * main - Where the program starts
  *
  * Return: 0
  *
  */
int main(void)
{
	int i;
	int ascii_0 = 48;

	for (i = 0; i < 100; i++)
	{
		int n1 = i / 10;
		int n2 = i % 10;

		if (n1 != n2 && n1 <= n2)
		{
			if (i > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n1 + ascii_0);
			putchar(n2 + ascii_0);
		}
	}
	putchar('\n');

	return (0);
}
