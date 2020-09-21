#include "holberton.h"

/**
  * print_alphabet_x10: Print the alphabet 10 times in row
  *
  * return: nothing
  *
  */
void print_alphabet_x10(void)
{
	int i, l;
	
	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}

}


