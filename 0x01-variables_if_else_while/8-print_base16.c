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
	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};


	for (i = 0; i < 16; i++)
		putchar(base_digits[i]);
	putchar('\n');

	return (0);
}
