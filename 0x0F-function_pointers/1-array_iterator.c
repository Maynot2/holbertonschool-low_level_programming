#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_iterator - Call a callback function action for each elments of an
  * an array of a given size.
  * @array: An array.
  * @size: The size of the array as an size_t.
  * @action: The callback function to be called on each elements of the array.
  *
  * Return: Nothing.
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
