#include "function_pointers.h"
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
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exist(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exist(99);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
	{
		printf("Error\n");
		exist(100);
	}
	printf("%d\n", get_op_func(a, b));
	return (0);
}
