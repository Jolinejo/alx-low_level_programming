#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (s);
}
