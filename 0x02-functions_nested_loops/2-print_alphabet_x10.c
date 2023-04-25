#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: “print “alpha 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
