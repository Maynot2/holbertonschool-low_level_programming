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
	int cj = 0;
	int ck = 0;
	int cl = 0;

	/* Using ASCII values for digit 0 to 9 */
	for (i = 48; i < 58; i++)
	{
		for (j = 48 + cj; j < 58; j++)
		{
			for (k = 48 + ck; k < 58; k++)
			{	
				for (l = 48 + cl; l < 58; l++)
				{
					if ((i == k && j == l) || (j == k && i == l))
						continue; 

					putchar((char)i);
					putchar((char)j);
					putchar(' ');	
					putchar((char)k);
					putchar((char)l);
					putchar(',');
					putchar(' ');

				}
				if (k == 57)
					cl++;
				if (l >= 58)
					l = 0;
			}
			if (j == 57)
				ck++;
			if (k >= 58)
				k = 0;
		}
		if (i == 57)
			cj++;
		if (j >= 58)
			j = 0;
	}
	putchar('\n');

	return (0);
}
