#include "main.h"

/**
 * _strlen - Entry point
 * Description: to check if letter is uppercase
 * @s: string to count its length
 * Return: no return
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
