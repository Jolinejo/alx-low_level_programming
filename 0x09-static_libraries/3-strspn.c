#include "main.h"

/**
 * _strspn - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @accept: character
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		if (!accept[j])
			break;
	}
	return (len);
}
