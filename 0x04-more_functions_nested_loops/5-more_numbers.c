#include "main.h"
/**
 * more_numbers - Entry point
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */

void more_numbers(void)
{
	int num = 0;
	int i = 10;

	while (i--)
	{
		while (num <= 14)
		{
			if (num >= 10)
				_putchar(1 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
		num = 0;
	}
}
