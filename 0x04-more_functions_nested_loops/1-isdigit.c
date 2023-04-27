#include "main.h"
/**
 * _isdigit - Entry point
 * @c: num to check
 * Description: to check if letter is uppercase
 * Return: 1 if digit 0 else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
