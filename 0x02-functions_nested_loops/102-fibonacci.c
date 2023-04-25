#include <stdio.h>

/**
 * main - Entry point
 * Description: prints 50 fib
 * Return: no return
 */
int main(void)
{
	long int fib[52];
	int i;

	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 51; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%ld, ", fib[i]);
	}
	fib[51] = fib[50] + fib[49];
	printf("%ld\n", fib[51]);
	return (0);
}
