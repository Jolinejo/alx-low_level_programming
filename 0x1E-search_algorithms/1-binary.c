#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - binary search fun
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: idx of val
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r = 0, l = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (r <= l)
	{
		printf("Searching in array: %d", array[r]);
		for (i = r + 1; i <= l; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (r + l) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			l = mid - 1;
		else
			r = mid + 1;
	}
	return (-1);
}
