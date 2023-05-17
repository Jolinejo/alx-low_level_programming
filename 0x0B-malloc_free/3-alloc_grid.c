#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- Entry point
 * Description: to check if letter is uppercase
 * @width: w
 * @height: h
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
