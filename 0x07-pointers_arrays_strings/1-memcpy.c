#include "main.h"

/**
 * _memcpy - Entry point
 * Description: to concat two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
