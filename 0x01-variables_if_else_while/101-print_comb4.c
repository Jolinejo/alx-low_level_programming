#include <stdio.h>

/**
 * main - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 0;
	int last;
	int second;

	while (first < 8)
	{
		second = first + 1;
		while (second < 9)
		{
			last = second + 1;
			while (last < 10)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(last + '0');
				if (last != 9 || second != 8 || first != 7)
				{
					putchar(',');
					putchar(' ');
				}
				last++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
