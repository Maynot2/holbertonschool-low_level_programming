#include <stdio.h>
#include "holberton.h"

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 0;
	unsigned long n1_p1 = 0, n1_p2 = 1, n2_p1 = 0, n2_p2 = 2, tmp1, tmp2;

	printf("1, 2");

	while (i < 96)
	{
		tmp1 = n2_p1;
		tmp2 = n2_p2;
		n2_p1 = n1_p1 + (n1_p2 + n2_p2) / 1000000000;
		n2_p2 = (n1_p2 + n2_p2) % 1000000000;
		n1_p1 = tmp1 + n2_p1;
		n1_p2 = tmp2;

		printf(", %ld%ld", n2_p1, n2_p2);

		i++;
	}
	printf("\n");

	return (0);
}
