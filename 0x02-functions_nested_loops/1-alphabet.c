#include "main.h"
/**
 * print_alphabet - writes the alphabets
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
