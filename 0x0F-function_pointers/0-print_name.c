#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_name - Prints a name using a callback function f.
  * @name: A name as a string.
  * @f: A callback function.
  *
  * Return: Nothing.
  *
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
