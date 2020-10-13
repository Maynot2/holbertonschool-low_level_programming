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
	int c, i;

	if (*s)
		c = 1;

	i = 0;
	while (s[i])
	{
		if (ischar(s[i]) &&  s[i + 1] == ' ')
			c++;
		i++;
	}
	if (s[_strlen(s) - 1] == ' ')
		c--;

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
	int wc, wlen;
	int i, j;

	if (str == NULL || str == "")
		return (NULL);

	wc = word_count(str);

	words = malloc(wc * sizeof(char *) + sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[wc] == NULL;

	for (i = 0; i < wc; i++)
	{
		wlen = _strlen(words[i]) + 1;
		words[i] = malloc(wlen * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
		}
	}

	return (words);
}
