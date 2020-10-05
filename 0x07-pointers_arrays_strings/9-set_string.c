#include "holberton.h"
#include <stdio.h>


/**
 * set_string - Sets the value of a pointer s to a char to
 * @s: A pointer to a pointer to a string
 * @to: A pointer to a string.
 *
 * Return: Viod.
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
