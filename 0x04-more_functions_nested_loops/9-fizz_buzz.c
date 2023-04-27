#include <stdio.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * Return: 1 if upper 0 else
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz");
		else if (!(i % 5))
			printf("Buzz");
		else if (!(i % 3))
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
