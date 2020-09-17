#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Where the program starts
  *
  * Return: 0
  *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of 809065140 is 0 and is 0\n");
	}
	else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}