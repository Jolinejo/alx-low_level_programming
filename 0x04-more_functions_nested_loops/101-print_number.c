#include "main.h"
/**
 * print_number - Entry point
 * @n: number
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10 && n >= 0)
	{
		_putchar((n % 10) + '0');
		return;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
