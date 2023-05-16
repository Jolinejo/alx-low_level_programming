#include "main.h"
#include <stdio.h>
/**
 * create_array - Entry point
 * Description: to check if letter is uppercase
 * @size: size
 * @c: intialize
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
