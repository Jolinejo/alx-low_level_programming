#include "main.h"

/**
 * times_table - Entry point
 * Description: prints from 0 to 9 times table
 * Return: no return value
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			int x = i * j;

			if (j == 0)
			{
				_putchar(x + '0');
				_putchar(',');
			}
			else
			{
				int dig1 = (x / 10) % 10;
				int dig2 = x % 10;

				_putchar(' ');
				if (dig1 > 0)
					_putchar(dig1 + '0');
				else
					_putchar(' ');
				_putchar(dig2 + '0');
				if (j != 9)
					_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
