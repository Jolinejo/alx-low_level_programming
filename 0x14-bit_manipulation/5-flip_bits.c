#include "main.h"
/**
 * flip_bits - Entry point
 * Description: to check if letter is uppercase
 * @n: num1
 * @m: num2
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int f = 0;

	while (x)
	{
		if (x & 1)
			f++;
		x = x >> 1;
	}
	return (f);
}
