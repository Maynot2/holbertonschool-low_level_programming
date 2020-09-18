#include <stdio.h>

/**
* main - Where the program starts
*
* Return: 0
*
*/
int main(void)
{
	int i, j;
	int n1, n2, n3, n4;
	int ascii_0 = 48;

	for (i = 0; i < 100; i++)
	{
		n1 = i / 10;
		n2 = i % 10;
	
		for (j = 0; j < 100; j++) 
		{
			n3 = j / 10;
			n4 = j % 10;

			if ((n1 == n4 && n2 == n3) || (n1 == n3 && n2 == n4))
				continue;

			if ((n2 <= n4) && (n1 <= n3))
			{
				if (!(n1 == 0 && n2 == 0 && n3 == 0 && n4 == 1))
				{
					putchar(',');
					putchar(' ');
				}				

				putchar(n1 + ascii_0);
				putchar(n2 + ascii_0);
				putchar(' ');
				putchar(n3 + ascii_0);
				putchar(n4 + ascii_0);
			}

		}		
	}	
	putchar('\n');

	return 0;
}
