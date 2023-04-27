#include "main.h"
/**
 * _isdigit - Entry point
 * @c: num to check
 * Description: to check if letter is uppercase
 * Return: 1 if digit 0 else
 */
int _isdigit(int c)
{
	int x = c - '0';

	if (x >= 0 && x <= 9)
		return (1);
	return (0);
}
