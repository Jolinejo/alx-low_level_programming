#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: prints minutes from 00:00
 * Return: no return value
 */
void jack_bauer(void)
{
	int total = 0;
	int firstN;
	int secondN;
	int dig1, dig2, dig3, dig4;

	while (total <= 1439)
	{
		firstN = total / 60;
		dig1 = (firstN / 10) % 10;
		dig2 = firstN % 10;
		secondN = total % 60;
		dig3 = (secondN / 10) % 10;
		dig4 = secondN % 10;
		_putchar(dig1 + '0');
		_putchar(dig2 + '0');
		_putchar(':');
		_putchar(dig3 + '0');
		_putchar(dig4 + '0');
		_putchar('\n');
		total++;
	}
}
