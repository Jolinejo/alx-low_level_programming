#include "main.h"

/**
 * rev_string - Entry point
 * Description: to check if letter is uppercase
 * @s: string
 * Return: no return
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		int idx = len - i - 1;
		char temp = s[i];

		s[i] = s[idx];
		s[idx] = temp;
	}
}
