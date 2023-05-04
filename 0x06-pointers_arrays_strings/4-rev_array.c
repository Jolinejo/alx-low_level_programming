#include "main.h"

/**
 * reverse_array - Entry point
 * Description: to check if letter is uppercase
 * @a: array
 * @n: length
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		int temp = *(a + n - 1 - i);
		*(a + n - 1 - i) = *(a + i);
		*(a + i) = temp;
	}
}
