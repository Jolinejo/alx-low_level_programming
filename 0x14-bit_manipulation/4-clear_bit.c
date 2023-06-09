#include "main.h"
/**
 * clear_bit - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * @index: idx
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 53)
		return (-1);
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}
