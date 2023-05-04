#include <stdio.h>

/**
 * print_buffer- Entry point
 * Description: to check if letter is uppercase
 * @b: buff
 * @size: size
 * Return: int
 */
void print_buffer(char *b, int size)
{
	int i, j;
	int sum = 0;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", sum);
			for (j = 0; j < 10; j++)
			{
				if (!(j % 2) && (i + j) < size)
					printf("%02x", b[i + j]);
				else if (j % 2 && (i + j) < size)
					printf("%02x ", b[i + j]);
				else if (!(j % 2))
					printf("  ");
				else
					printf("   ");
			}
			for (j = i; j < i + 10 && j < size; j++)
			{
				if (b[j] > 31)
					printf("%c", b[j]);
				else
					printf(".");
			}
			printf("\n");
			sum += 10;
		}
	}
}
