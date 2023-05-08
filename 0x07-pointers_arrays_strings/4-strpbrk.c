#include "main.h"
#include <stdio.h>

/**
 * _stepbrk - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @accept: character
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	if (accept == 0 || s == 0)
		return (NULL);
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
			{
				return (s + i);
			}
	}
	return (NULL);
}
