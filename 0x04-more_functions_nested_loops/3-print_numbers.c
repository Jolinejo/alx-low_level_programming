#include "main.h"

/**
 * main - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
void main(void)
{
	int alpha = 0;

	while (alpha < 10)
	{
		_putchar(alpha + '0');
		alpha++;
	}
	_putchar('\n');
	return (0);
}
