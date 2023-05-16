#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ar;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	l++
	ar = malloc(sizeof(char) * l);
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ar[i] = str[i];
	ar[i] = str[i];
	return (ar);
}
