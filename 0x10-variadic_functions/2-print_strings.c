#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Entry point
 * Description: to check if letter is uppercase
 * @separator: sep
 * @n: number
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		s = va_arg(args, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
	}
	printf("\n");
}
