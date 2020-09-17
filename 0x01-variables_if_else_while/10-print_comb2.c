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

	/* Using ASCII values for digit 0 to 9 */
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar((char)i);
			putchar((char)j);
			if (i == 57 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
