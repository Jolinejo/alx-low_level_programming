#include "main.h"
/**
 * binary_to_uint - Entry point
 * Description: to check if letter is uppercase
 * @b: number
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num = num * 2 + b[i] - '0';
		else
			return (0);
	}
	return (num);
}
