#include "main.h"

/**
 * print_diagsums- Entry point
 * Description: to check if letter is uppercase
 * @a: array
 * @size: sqrt area
 * Return: int
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size * size; i++, j++)
	{
		sum1 += a[i + j];
		sum2 += a[i + size - j - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
