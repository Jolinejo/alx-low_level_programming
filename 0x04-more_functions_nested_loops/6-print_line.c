#include "main.h"

/**
 * print_line - Entry point
 * @n: length
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
