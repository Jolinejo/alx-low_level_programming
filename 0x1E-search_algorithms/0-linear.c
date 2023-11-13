#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - linear search fun
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: idx of val
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
