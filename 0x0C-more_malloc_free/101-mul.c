#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * isnum - Test if string only made of digits.
 * @s: A pointer to a string.
 *
 * Return: 1 on success.
 *         0 on error.
 *
 */

int isnum(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Computes the size of a string s.
 * @s: A pointer to a string.
 *
 * Return: A integer.
 *
 */

int _strlen(char *s)
{
	int c = 0;

	if (s == NULL)
		return (c);

	while (*(s + c))
		c++;
	return (c);
}

/**
 * mult_two_nums - Multiplies any numbers inputed as strings.
 * @n1: A pointer to a string.
 * @n2: A pointer to a string.
 *
 * Return: The computed calculation as an array of integer.
 *
 */

int *mult_two_nums(char *n1, char *n2)
{
	int i, j, calc, carry, offset;
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int **total;
	int currenttotal;

	total = malloc(sizeof(int *));
	if (total == NULL)
		return (NULL);
	*total = calloc((len1 + len2), sizeof(int));
	if (*total == NULL)
	{
		free(total);
		return (NULL);
	}

	offset = 0;
	for (i = len1 - 1 ; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			currenttotal = total[0][len1 + j - offset];
			calc = currenttotal + (n1[i] - '0') * (n2[j] - '0') + carry;
			carry = calc / 10;
			if (j == 0 && carry)
				total[0][len1 - offset - 1] = carry;
			total[0][len1 + j - offset] = calc % 10;
		}
		offset++;
	}
	return (total[0]);
}

/**
 * _printnum - Print a number inputed as an array of integer arr given
 * a length len.
 * @arr: An array of integers.
 * @len: An integer.
 *
 * Return: Nothing.
 *
 */

void _printnum(int *arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (!(arr[i] == 0 && i == 0))
			_putchar(arr[i] + '0');
		if (arr[i] == 0 && i == 1)
			break;
	}
	_putchar('\n');
}

/**
 * main - Where the program starts.
 * @argc: An integer | the number of cmd line arguments passed to the program.
 * @argv: An array of strings of all the program arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	char *num1, *num2;
	int *result;

	if (argc != 3 || !isnum(argv[1]) || !isnum(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	if (_strlen(argv[1]) >= _strlen(argv[2]))
	{
		num1 = argv[1];
		num2 = argv[2];
	}
	else
	{
		num1 = argv[2];
		num2 = argv[1];
	}

	result = mult_two_nums(num1, num2);


	_printnum(result, _strlen(num1) + _strlen(num2));

	return (0);
}
