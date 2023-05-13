#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * @argc: num of inputs
 * @argv: inputs
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
