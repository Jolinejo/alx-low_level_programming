#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- Entry point
 * Description: to check if letter is uppercase
 * @a: array
 * @size: sqrt area
 * Return: int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
