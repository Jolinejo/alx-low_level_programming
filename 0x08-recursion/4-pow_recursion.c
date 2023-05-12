#include "main.h"

/**
 * _pow_recursion- Entry point
 * Description: to check if letter is uppercase
 * @x: num
 * @y: num
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
