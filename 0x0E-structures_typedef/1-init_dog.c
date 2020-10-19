#include "dog.h"

/**
  * init_dog - Initialize a variable of type struct dog.
  * @d: A dog struct
  * @name: The name of the dog as a string.
  * @age: The age of the dog as a float.
  * @owner: The name of the dog owner as a string.
  *
  * Return: Nothing.
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner =  owner;
}
