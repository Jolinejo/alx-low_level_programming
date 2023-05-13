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
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);
	for (l = 0; l < 5 && i >= 2; l++)
	{
		sum += i / coins[l];
		i = i % coins[l];
	}
	if (i == 1)
		sum += 1;
	printf("%d\n", sum);
	return (0);
}
