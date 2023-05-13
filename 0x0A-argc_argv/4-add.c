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
		l = strlen(argv[i]);
		if (atoi(argv[i]) == 0 && (argv[i] - '0' != 0 || l > 1))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
		{
			printf("0\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
