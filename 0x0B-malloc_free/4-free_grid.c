#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * free_grid - Free memory for a 2 dimentional array.
  * @grid: A pointer to pointer to an integer.
  * @height: An integer.
  *
  * Return: Nothing.
  *
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
