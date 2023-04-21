#include <stdio.h>

/**
 * main - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 0;
	char ALPHA = 'a';

	while (alpha < 10)
	{
		putchar(alpha + '0');
		alpha++;
	}
	while (ALPHA < 'g')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
