#include <stdio.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * @argc: num of inputs
 * @argv: inputs
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
