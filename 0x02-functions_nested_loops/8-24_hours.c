#include "holberton.h"

/**
  * jack_bauer - Prints every minutes of the day from 00:00 to 23:59
  *
  * Return: void
  *
  */
void jack_bauer(void)
{
	int i, j;
	int h1, h2, m1, m2;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			h1 = i / 10;
			h2 = i % 10;
			m1 = j / 10;
			m2 = j % 10;

			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}
