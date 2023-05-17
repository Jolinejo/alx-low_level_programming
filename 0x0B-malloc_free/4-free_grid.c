#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- Entry point
 * Description: to check if letter is uppercase
 * @grid: grid
 * @height: height
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
