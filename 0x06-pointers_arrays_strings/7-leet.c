#include "main.h"

/**
 * leet - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "AEOTLaeotl";
	char numbers[] = "4307143071";

	for (i = 0; str[i]; i++)
	{
		int found = 0;

		for (j = 0; letters[j]; j++)
			if (str[i] == letters[j])
			{
				found = 1;
				break;
			}
		if (found)
			str[i] = numbers[j];
	}
	return (str);
}
