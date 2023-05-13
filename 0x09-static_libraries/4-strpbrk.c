#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @accept: character
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *ptr = NULL;

	if (accept == NULL || s == NULL)
		return (ptr);
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
	}
	return (ptr);
}
