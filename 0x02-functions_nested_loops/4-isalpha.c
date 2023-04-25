#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to check
 * Description: checks if alpha
 * Return: 1 if alpha 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
