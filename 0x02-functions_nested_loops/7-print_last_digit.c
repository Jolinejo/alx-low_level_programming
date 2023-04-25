#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number to be checked
 * Description: returns last digit of a number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
