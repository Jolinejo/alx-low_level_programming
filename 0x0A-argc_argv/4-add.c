#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * @argc: num of inputs
 * @argv: inputs
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, l;

	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l]; l++)
		{
			if (argv[i][l] >= '0' && argv[i][l] <= '9')
				continue;
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
