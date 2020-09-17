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
	int ascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{	
				for (l = 0; l < 10; l++)
				{
				/*	if ((i == k && j == l) || (j == k && i == l))
						continue; 
				*/
					putchar((char)ascii[i]);
					putchar((char)ascii[j]);
					putchar(' ');	
					putchar((char)ascii[k]);
					putchar((char)ascii[l]);
					putchar(',');
					putchar(' ');
				
				}
				if ((char)ascii[k] == '9')
				printf("hello\n");
				printf("l=%d ", l);
				printf("k=%d ", k);
					l += (1 + k);
				if ((char)ascii[k] == '0')
					l = 0;
			}
			if ((char)ascii[j] == '9')
				k += (1 + j);
			if ((char)ascii[j] == '0')
				k = 0;
		}
		if ((char)ascii[i] == '9')
			j += (1 + i);
		if ((char)ascii[i] == '0')
			j = 0;
	}
	putchar('\n');

	return (0);
}
