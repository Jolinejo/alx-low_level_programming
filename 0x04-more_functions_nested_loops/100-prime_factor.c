#include <stdio.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
int main(void)
{
	long int x = 612852475143;
	long int j;

	for (j = 3; j < x; j += 2)
		while (x % j == 0)
			x /= j;
	printf("%ld\n", x);
	return (0);
}
