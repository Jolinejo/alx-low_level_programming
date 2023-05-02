#include "main.h"

/**
 * puts_half - Entry point
 * Description: to check if letter is uppercase
 * @str: string`
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int start_point;

	for (i = 0; str[i]; i++)
		len++;
	start_point = (len + 1) / 2;
	for (i = start_point; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
