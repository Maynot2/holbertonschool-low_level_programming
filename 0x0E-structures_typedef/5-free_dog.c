#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory preiously allocated for a dog_t.
 * @d: A dog_t
 *
 * Return: Nothing.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

