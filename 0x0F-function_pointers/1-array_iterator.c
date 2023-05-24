#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * Description: to check if letter is uppercase
 * @array: arr
 * @size: size
 * @action: func
 * Return: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
