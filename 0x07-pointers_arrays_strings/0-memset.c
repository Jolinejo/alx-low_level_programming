#include "main.h"

/**
 * _memset - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @b: character to fill
 * @n: length
 * Return: int
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
