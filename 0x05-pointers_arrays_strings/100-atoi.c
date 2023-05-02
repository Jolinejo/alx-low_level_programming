#include "main.h"

/**
 * _atoi - Entry point
 * Description: to check if letter is uppercase
 * @s: string to be converted
 * Return: no return
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int j;
	int odd = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			i = i * 10 + s[j] - '0';
		}
		else if (s[j] == '-')
			odd++;
		else if (i > 0)
			break;
	}
	if (odd % 2)
		i = i * -1;
	return (i);
}
