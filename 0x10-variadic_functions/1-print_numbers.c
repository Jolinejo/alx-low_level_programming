#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Entry point
 * Description: to check if letter is uppercase
 * @separator: sep
 * @n: number
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
}
