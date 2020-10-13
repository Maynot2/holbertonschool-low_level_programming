#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * alloc_grid - Points to a newly created 2 dimentional array.
  * @width: An integer.
  * @height: An integer.
  *
  * Return: A pointer to a pointer to an integer.
  *
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
		return (grid);
	}
}
