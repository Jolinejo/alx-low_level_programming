#include <stdio.h>

/**
 * main - Entry point
 * Description: prints 50 fib
 * Return: no return
 */
int main(void)
{
	long int fib[52], sum = 0;
	int i;

	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 52; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 2; fib[i] <= 4000000; i++)
	{
		if (!(fib[i] % 2))
			sum += fib[i];
	}
	printf("%ld\n", sum);
	return (0);
}
