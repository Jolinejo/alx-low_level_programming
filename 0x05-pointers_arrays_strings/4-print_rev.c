#include "main.h"

/**
 * print_rev - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * Return: no return
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;
	for (len = len - 1; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
