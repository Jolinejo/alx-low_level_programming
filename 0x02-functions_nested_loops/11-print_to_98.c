#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: starting point
 * Description: prints till 98
 * Return: no return
 */
void print_to_98(int n)
{
	int x, y[5], i, j;

	if (n <= 98)
		for (; n <= 98; n++)
		{
			if (n == 0)
				_putchar('0');
			if (n < 0)
			{
				_putchar('-');
				x = n * -1;
			}
			else
				x = n * 1;
			for (i = 0; x; x /= 10, i++)
				y[i] = x % 10;
			for (j = i - 1; j >= 0; j--)
				_putchar(y[j] + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (; n >= 98; n--)
		{
			x = n * 1;
			for (i = 0; x ; x /= 10, i++)
				y[i] = x % 10;
			for (j = i - 1; j >= 0; j--)
				_putchar(y[j] + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
