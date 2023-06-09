#include "main.h"
/**
 * print_non_zero - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * Return: int
 */
void print_non_zero(unsigned long int n)
{
	if (n == 0)
		return;
	print_non_zero(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * Return: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_non_zero(n);
}
