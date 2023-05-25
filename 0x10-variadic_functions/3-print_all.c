#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Entry point
 * Description: to check if letter is uppercase
 * @format: sep
 * Return: int
 */
void print_all(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list args;
	char *s;

	va_start(args, format);
	while (format[i])
	{
		if (j != 0)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			j = 1;
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			j = 1;
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			j = 1;
			printf("%f", va_arg(args, double));
			break;
		case 's':
			j = 1;
			s = va_arg(args, char*);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		default:
			j = 0;
		}
		i++;
	}
	printf("\n");
}
