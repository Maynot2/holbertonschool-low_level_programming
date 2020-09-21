#include "holberton.h"

/**
  * islower - Tests if a character c is lower case
  * @c: The character to be tested
  *
  * Return: on success 1
  *         on error 0
  *
  */
int islower(int c)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
			return (1);
	}

	return (0);

}


