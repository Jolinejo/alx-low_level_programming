#include "main.h"

/**
 * _strcpy - Entry point
 * @src: source striing
 * @dest: dest string
 * Description: to check if letter is uppercase
 * Return: no return
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
