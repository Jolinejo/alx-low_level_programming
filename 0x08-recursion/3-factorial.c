#include "main.h"

/**
 * factorial- Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * Return: int
 */
int factorial(int n)
{
	if (n > 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
