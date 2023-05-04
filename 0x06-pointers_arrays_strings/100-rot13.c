#include "main.h"

/**
 * rot13 - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *rot13(char *str)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
			if (str[i] == letters[j])
			{
				str[i] = rot[j];
				break;
			}
	}
	return (str);
}
