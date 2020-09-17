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
	int k;
	int c1 = 0;
	int c2 = 0;

	/* Using ASCII values for digit 0 to 9 */
	for (i = 48; i < 58; i++)
	{
		for (j = 49 + c1; j < 58; j++)
		{
			for (k = 50 + c2; k < 58; k++)
			{
				if (i == j && k == j)
					continue;

				putchar((char)i);
				putchar((char)j);
				putchar((char)k);

				if (i == 55 && j == 56 && k == 57)
					break;

				putchar(',');
				putchar(' ');
			}
			if (c2 == 7)
				break;
			c2++;
		}
		if (c1 == 8)
			break;
		c1++;
		c2 = c1;
	}
	putchar('\n');

	return (0);
}
