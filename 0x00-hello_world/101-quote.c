#include <stdio.h>

/**
 * main - Where the program starts
 *
 * Return: 0
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quote, sizeof(quote));

	return (1);
}
