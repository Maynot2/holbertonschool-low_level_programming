#include <stdio.h>
#include "dog.h"

/**
  * print_dog - Print data inside a dog struct.
  * @d: A dog struct
  *
  * Return: Nothing.
  *
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: 0.000000\n");
		d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}

