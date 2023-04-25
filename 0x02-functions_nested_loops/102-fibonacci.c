#include <stdio.h>

/**
 * main - Entry point
 * Description: prints 50 fib
 * Return: no return
 */
int main(void)
{
	long int fib[50];
	int i;

	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 49; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%ld, ", fib[i]);
	}
	fib[49] = fib[48] + fib[47];
	printf("%ld\n", fib[49]);
	return (0);
}
