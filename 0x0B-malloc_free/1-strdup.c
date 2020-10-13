#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

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
  * _strdup - Points to a newly allocated space in memory, which contains a
  * copy of the string str.
  * @str: A string.
  *
  * Return: A pointer to a string.
  *
  */

char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	char *cp_str_pt = malloc(len * sizeof(char));
	int i;

	if (cp_str_pt == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			*(cp_str_pt + i) = *(str + i);
		}
		*(cp_str_pt + i) = '\0';
		return (cp_str_pt);
	}
}
