#include "main.h"

/**
 * swap_int - Entry point
 * Description: to check if letter is uppercase
 * @a: first number
 * @b: second number
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
