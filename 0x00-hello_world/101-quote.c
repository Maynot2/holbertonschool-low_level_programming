#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Where the program starts
 *
 * Return: 1
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t qlen = strlen(q);

	write(2, q, qlen);

	return (1);
}
