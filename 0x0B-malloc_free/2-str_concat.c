#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _ str_concat - Entry point
 * Description: to check if letter is uppercase
 * @s1: string1
 * @s2: string2
 * Return: int
 */
char *str_concat(char *s1, char *s2)
{
	unsigned i, l, l2 = 0;
	char *str;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		l++;
	for (i = 0; s2[i]; i++)
		l2++;
	l2++;
	str = malloc(sizeof(char) * (l + l2));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (i = 0; s2[i]; i++)
		str[i] = s2[i];
	str[i] = s2[i];
	return (str);
	
}
