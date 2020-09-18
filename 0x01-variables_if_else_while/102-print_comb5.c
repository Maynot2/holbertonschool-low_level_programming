#include <stdio.h>

/**
  * main - Where the program starts
  *
  * Return: 0
  *
  */
int main(void)
{
	int i, j, k, l;
	int ci = 0;
	int cj = 0;
	int ck = 0;
	int skip = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (ci > 0)
				skip = ci;
			for (k = 48 + skip; k < 58; k++)
			{
				skip = (ck == 0) ? cj : 0;
				for (l = 48 + skip; l < 58; l++)
				{
					if ((i == k && j == l) || (j == k && i == l))
						continue;
					putchar((char)i);
					putchar((char)j);
					putchar(' ');
					putchar((char)k);
					putchar((char)l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				ck++;
			}
			cj++;
			ck = 0;
		}
		ci++;
		cj = 0;
	}
	putchar('\n');

	return (0);
}
