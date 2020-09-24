#include "holberton.h"

/**
  * _isdigit - Tests if a character c is a digit
  * @c: The character to be tested
  *
  * Return: on success 1
  *         on error 0
  *
  */
int _isdigit(int c)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (c == d)
			return (1);
	}

	return (0);

}
