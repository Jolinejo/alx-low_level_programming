#include "function_pointers.h"
/**
 * print_name- Entry point
 * Description: to check if letter is uppercase
 * @name: name
 * @f: func
 * Return: int
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
