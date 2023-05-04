#include "main.h"

/**
 * _strncpy - Entry point
 * Description: to concat two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest modified
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];
	for ( j < n; j++)
		dest[j] = 0;
	return (dest);
}
