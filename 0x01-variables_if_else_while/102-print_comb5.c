#include <stdio.h>

/**
 * main - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 0;
	int second = 0;
	int second_digit = first * 10 + 1;
	int third;
	int last;

	while (first < 10)
	{
		while (second < 10)
		{
			second_digit = first * 10 + second + 1;
			while (second_digit < 100)
			{
				last = second_digit % 10;
				third = (second_digit / 10) % 10;
				putchar(first + '0');
				putchar(second + '0');
				putchar(' ');
				putchar(third + '0');
				putchar(last + '0');
				if (last != 9 || third != 9 || second != 8 || first != 9)
				{
					putchar(',');
					putchar(' ');
				}
				second_digit++;
			}
			second++;
		}
		first++;
		second = 0;
	}
	putchar('\n');
	return (0);
}
