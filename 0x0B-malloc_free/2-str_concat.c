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
  * str_concat - Points to a newly allocated space in memory, which contains
  * the result of appending string s1 with string s2.
  * @s1: A pointer to a string.
  * @s2: A pointer to a string.
  *
  * Return: A pointer to a string.
  *
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *conc_spt;
	int i;

	if (s1 == NULL)
		*s1 = 0;
	if (s2 == NULL)
		*s2 = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2) + 1;

	conc_spt = malloc(len1 * sizeof(char) + len2 * sizeof(char));

	if (conc_spt == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			*(conc_spt + i) = *(s1 + i);
		}
		for (; i < len1 + len2; i++)
		{
			*(conc_spt + i) = *(s2 + (i - len1));
		}
		*(conc_spt + i) = '\0';
		return (conc_spt);
	}
}
