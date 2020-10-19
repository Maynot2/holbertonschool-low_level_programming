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
	size_t sizeofname = _strlen(name) * sizeof(char);
	size_t sizeofage = sizeof(float);
	size_t sizeofowner = _strlen(owner) * sizeof(char);

	nd_pt = malloc(sizeofname + sizeofage + sizeofowner);
	if (nd_pt == NULL)
		return (NULL);

	nd_pt->name = name;
	nd_pt->age = age;
	nd_pt->owner = owner;

	return (nd_pt);
}

