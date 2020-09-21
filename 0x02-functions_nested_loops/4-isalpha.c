#include "holberton.h"

/**
  * _isalpha - Tests if a character c is an alphanumeric character either
  * lowercase or uppercase
  * @c: The character to be tested
  *
  * Return: on success 1
  *         on error 0
  *
  */
int _isalpha(int c)
{
	int l;

	for (l = 'A'; l <= 'z'; l++)
	{
		if (c == l)
			return (1);
	}

	return (0);

}
