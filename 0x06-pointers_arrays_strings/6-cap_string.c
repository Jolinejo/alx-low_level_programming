#include "main.h"

/**
 * cap_string - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		else
		{
			int found = 0;

			for (j = 0; sep[j]; j++)
				if (str[i - 1] == sep[j])
				{
					found = 1;
					break;
				}
			if (str[i] >= 'a' && str[i] <= 'z' && found)
				str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
