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
	int a;
	int i;
	char *adress = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		printf("%.2hhx", adress[i]);
		if (i < a - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
