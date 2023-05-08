#include "main.h"

/**
 * _strspn - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * @accept: character
 * Return: int
 */
char *_strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
		if (s[i] == accept[i])
			len++;
		else
			break;
	return (len);
}
