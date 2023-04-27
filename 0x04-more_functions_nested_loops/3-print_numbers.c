#include "main.h"

/**
 * print_numbers - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int alpha = 0;

	while (alpha < 10)
	{
		_putchar(alpha + '0');
		alpha++;
	}
	_putchar('\n');
}
