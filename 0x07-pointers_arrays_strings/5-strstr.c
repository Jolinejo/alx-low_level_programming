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
	unsigned int j;
	unsigned int y;
	char *ptr;
	int found = 0;

	for (i = 0; haystack[i]; i++)
	{
		ptr = &haystack[i];
		for (j = 0; needle[j]; j++)
		{
			if (j == 0 && needle[j] == haystack[i])
			{
				found = 1;
				y = i + 1;
			}
			else if (needle[j] == haystack[y])
				y = y + 1;
			else
			{
				found = 0;
				break;
			}

		}
		if (found)
			return (ptr);
	}
	return (NULL);
}
