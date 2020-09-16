#include <stdio.h>

/**
 * main - Where the program starts
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of a int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(lli));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
	return (0);
}
