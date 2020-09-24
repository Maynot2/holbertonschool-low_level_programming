#include "holberton.h"

/**
  * _isupper - Tests if a character c is uppercase
  * @c: The character to be tested
  *
  * Return: on success 1
  *         on error 0
  *
  */
int _isupper(int c)
{
	int l;

	for (l = 'A'; l <= 'Z'; l++)
	{
		if (c == l)
			return (1);
	}

	return (0);

}
