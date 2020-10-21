#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  * main - where the program starts.
  * @argc : The number of arguments the program takes from the cmdline.
  * @argv : The cmdline arguments as an array of strings.
  *
  * Return: Always 0.
  *
  */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int (*res)(int, int);

	(void)argc;

	res = get_op_func(operator);

	if (res)
		printf("%d\n", res(num1, num2));

	return (0);
}
