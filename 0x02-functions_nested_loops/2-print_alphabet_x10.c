#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: “print “alpha 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
