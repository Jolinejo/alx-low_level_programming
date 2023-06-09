#include "main.h"
/**
 * get_endianness - Entry point
 * Description: to check if letter is uppercase
 * Return: int
 */
int get_endianness(void)
{
	int x = 1;
	char *f = (char *)&x;

	if (*f)
		return (1);
	else
		return (0);
}
