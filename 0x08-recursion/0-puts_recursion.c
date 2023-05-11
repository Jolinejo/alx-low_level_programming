#include "main.h"

/**
 * _puts_recursion- Entry point
 * Description: to check if letter is uppercase
 * @s: array
 * Return: int
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
