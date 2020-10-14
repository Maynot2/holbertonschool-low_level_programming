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
  * ischar - Tests if input is a character.
  * @c: A character.
  *
  * Return: 1 on success.
  *         0 on error.
  *
  */

int ischar(char c)
{
	char l = 33;

	while (l <= 'z')
	{
		if (c == l)
			return (1);
		l++;
	}
	return (0);
}

/**
  * word_count - Counts how many words in a string.
  * @s: A pointer to a string.
  *
  * Return: An integer.
  *
  */

int word_count(char *s)
{
	int c = 0, i = 0;

	while (s[i])
	{
		if (ischar(s[i]) &&  s[i + 1] == ' ')
			c++;
		if (ischar(s[i]) && s[i + 1] == '\0')
			c++;
		i++;
	}

	return (c);
}

/**
  * strtow - Split a string in two.
  * @str: A pointer to a string.
  *
  * Return: A pointer to to a pointer a string.
  *
  */

char **strtow(char *str)
{
	char **words;
	int wc, i, j, k;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);

	wc = word_count(str);

	words = malloc(wc * sizeof(char *) + sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[wc] = NULL;

	j = 0; /* counts char in str */
	i = 0; /* counts words in str */
	while (j < _strlen(str))
	{
		if (ischar(str[j]))
		{
			k = 0; /* counts letters in words */
			while (ischar(str[j + k]))
				k++;

			words[i] = malloc((k + 1) * sizeof(char));
			/* free if fail */

			k = 0;
			while (ischar(str[j]) || str[j] == '\0')
			{
				words[i][k] = str[j];
				k++;
				j++;
			}
			words[i][k] = '\0';
			i++;
		}
		j++;
	}
	return (words);
}
