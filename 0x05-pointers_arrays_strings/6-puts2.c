#include "main.h"

/**
 * puts2 - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: no return
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
