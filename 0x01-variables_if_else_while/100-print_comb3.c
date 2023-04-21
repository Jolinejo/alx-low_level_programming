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

	while (first < 9)
	{
		last = first + 1;
		while (last < 10)
		{
			putchar(first + '0');
			putchar(last + '0');
			if (last != 9 || first != 8)
			{
				putchar(',');
				putchar(' ');
			}
			last++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
