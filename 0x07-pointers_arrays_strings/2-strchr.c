#include "main.h"

/**
 * _strchr - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @c: character
 * Return: int
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
