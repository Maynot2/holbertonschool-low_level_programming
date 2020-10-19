#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
 * new_dog - Creates a new dog given a name, age and owner.
 * @name: The  name of the dog as a string
 * @age: The age of the dog as a float.
 * @owner: The name of the owner of the dog as a string
 *
 * Return: A dog_t.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd_pt;
	int i;

	nd_pt = malloc(sizeof(dog_t));
	if (nd_pt == NULL)
		return (NULL);
	nd_pt->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (nd_pt->name == NULL)
	{
		free(nd_pt);
		return (NULL);
	}
	nd_pt->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (nd_pt->owner == NULL)
	{
		free(nd_pt->name);
		free(nd_pt);
		return (NULL);
	}

	for (i = 0; i <= _strlen(name); i++)
	{
		nd_pt->name[i] = name[i];
	}

	for (i = 0; i <= _strlen(owner); i++)
	{
		nd_pt->owner[i] = owner[i];
	}

	nd_pt->age = age;

	return (nd_pt);
}

