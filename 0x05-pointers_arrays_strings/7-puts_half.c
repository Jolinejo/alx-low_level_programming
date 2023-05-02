#include "main.h"

/**
 * puts_half - Entry point
 * Description: to check if letter is uppercase
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
		len++;
	int start_point = (len + 1) / 2;

	for (i = start_point; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
