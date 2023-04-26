#include <stdio.h>

/**
 * main - Entry point
 * Description: prints 50 fib
 * Return: no return
 */
int main(void)
{
	unsigned long curr1, curr2, prev1small, prev1big, prev2small, prev2big;
	int i;

	prev1small = 1;
	prev2small = 0;
	prev1big = 0;
	prev2big = 0;
	for (i = 2; i < 99; i++)
	{
		curr1 = (prev1small + prev2small) % 1000000000000000UL;
		curr2 = prev1big + prev2big + (prev1small + prev2small) / 1000000000000000UL;
		if (curr2 > 0)
			printf("%lu%015lu", curr2, curr1);
		else
			printf("%lu", curr1);
		prev2small = prev1small;
		prev2big = prev1big;
		prev1small = curr1;
		prev1big = curr2;
		putchar(',');
		putchar(' ');
	}
	curr1 = (prev1small + prev2small) % 1000000000000000UL;
	curr2 = prev1big + prev2big + (prev1small + prev2small) / 1000000000000000UL;
	printf("%lu%015lu\n", curr2, curr1);
	return (0);
}
