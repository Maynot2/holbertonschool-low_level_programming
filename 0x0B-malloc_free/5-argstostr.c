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
  * argstostr - Concatenates all the arguments of a program.
  * @ac: An integer
  * @av: A pointer to a pointer to a string.
  *
  * Return: A pointer to a string.
  *
  */

char *argstostr(int ac, char **av)
{
	char *args_spt;
	int total_len = 0;
	int i, j, k;

	if (ac == NULL || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		total_len += (_strlen(av[j]) + 1);
	}
	total_len++;

	args_spt = malloc(total_len * sizeof(char));

	if (args_spt == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		j = 0;
		while (j < ac)
		{
			k = 0;
			while (k < _strlen(av[j]))
			{
				args_spt[i] = av[j][k];
				i++;
				k++;
			}
			args_spt[i] = '\n';
			i++;
			j++;
		}
	}
	args_spt[i] = '\0';
	return (args_spt);
}
