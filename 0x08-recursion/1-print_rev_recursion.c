#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * Description: to check if letter is uppercase
 * @s: array
 * Return: int
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
