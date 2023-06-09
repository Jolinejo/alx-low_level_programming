#include "main.h"
/**
 * get_bit - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * @index: ind
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	
	if (index > 53)
		return (-1);
	while (i != index && n != 0)
	{
		i++;
		n = n >> 1;
	}
	if (i == index)
		return (n & 1);
	return (-1);
}
