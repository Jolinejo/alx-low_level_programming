#include <stdio.h>

/**
 * main - Entry point
 * Description: "negative or positive"
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
