#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Description: to check if letter is uppercase
 * @a: array
 * @n: numbers to print
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= sizeof(a) / sizeof(a[0]) && n >= 0)
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
}
