#include "main.h"

/**
 * _puts - Entry point
 * Description: to check if letter is uppercase
 * @str: string to print
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
