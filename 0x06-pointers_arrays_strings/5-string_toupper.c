#include "main.h"

/**
 * string_toupper - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	return (str);
}
