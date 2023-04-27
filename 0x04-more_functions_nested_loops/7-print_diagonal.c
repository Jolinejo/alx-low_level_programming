#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: length
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
void print_diagonal(int n)
{
	int i = 0;
	int len = n;

	if (n > 0)
		while (n--)
		{
			for (i = len - n; i > 0; i--)
			{
				if (i == 1)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
