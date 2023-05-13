#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * Description: to check if letter is uppercase
 * @haystack: string to search
 * @needle: substring
 * Return: int
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	char *str;
	char *final;
	char *ptr;

	for (i = 0; haystack[i]; i++)
	{
		ptr = &haystack[i];
		str = &haystack[i];
		final = needle;
		while (final && *str == *final)
		{
			final++;
			str++;
		}
		if (*final == '\0')
			return (ptr);
	}
	return (NULL);
}
