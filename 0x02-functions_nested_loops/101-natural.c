#include <stdio.h>

/**
 * main - Entry point
 * Description: prints sum of multiples
 * Return: 0
 */
int main(void)
{
	long int sum = 0;
	int i;

	for (i = 0; i * 3 < 1024; i++)
	{
		if ((i * 3) % 5)
			sum += i * 3;
	}
	for (i = 0; i * 5 < 1024; i++)
		sum += i * 5;
	printf("%ld\n", sum);
	return (0);
}
