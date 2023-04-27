#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int alpha = 0;

	while (alpha < 10)
	{
		if (alpha != 2 && alpha != 4)
			_putchar(alpha + '0');
		alpha++;
	}
	_putchar('\n');
}
