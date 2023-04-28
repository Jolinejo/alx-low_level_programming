#include "main.h"

/**
 * print_triangle - Entry point
 * @size: length
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j >= 0; j--)
			{
				if (j > i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
