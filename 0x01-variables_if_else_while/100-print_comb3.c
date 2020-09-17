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
	int j;
	int c = 0;

	/* Using ASCII values for digit 0 to 9 */
	for (i = 48; i < 58; i++)
	{
		for (j = 48 + c; j < 58; j++)
		{
			if (i == j)
				continue;

			putchar((char)i);
			putchar((char)j);

			if (i == 56 && j == 57)
				break;

			putchar(',');
			putchar(' ');
		}
		if (c == 8)
			break;
		c++;
	}
	putchar('\n');

	return (0);
}
