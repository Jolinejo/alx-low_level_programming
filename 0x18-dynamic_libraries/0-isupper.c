#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to check
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
