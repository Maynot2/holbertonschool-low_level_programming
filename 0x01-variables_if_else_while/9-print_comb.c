#include <stdio.h>

/**
  * main - Where the program starts
  *
  * Return: 0
  *
  */
int main(void)
{
	int num;

	/* Using ASCII values for digit 0 to 9 */
	for (num = 48; num < 58; num++)
	{
		putchar((char)num);
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
