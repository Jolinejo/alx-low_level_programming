#include "main.h"

/**
 * print_times_table - Entry point
 * @n: last times table
 * Description: prints from 0 to n times table
 * Return: no return value
 */
void print_times_table(int n)
{
	int i = 0, j = 0, x;

	if (n <= 15 && n >= 0)
		while (i <= n)
		{
			while (j <= n)
			{
				x = i * j;
				if (j == 0 && n != 0)
				{
					_putchar(x + '0');
					_putchar(',');
				}
				else if (n == 0)
					_putchar('0');
				else
				{
					int dig1 = (x / 10) % 10;
					int dig2 = x % 10;
					int dig0 = (x / 100) % 10;

					_putchar(' ');
					if (dig0 > 0)
						_putchar(dig0 + '0');
					else
						_putchar(' ');
					if (dig1 > 0 || dig0 > 0)
						_putchar(dig1 + '0');
					else
						_putchar(' ');
					_putchar(dig2 + '0');
					if (j != n)
						_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
}
