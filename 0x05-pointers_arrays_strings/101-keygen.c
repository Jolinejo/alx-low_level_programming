#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * Return: int
 */
int main(void)
{
	char arr[33];
	time_t t;
	int i;
	int sum;
	char out[33];

	srand((unsigned int) time(&t));
	for (i = 0; i < 13; i++)
		arr[i] = ',';
	for (; i < 33; i++)
		arr[i] = 'n';
	i = 0;
	while (i < 33)
	{
		sum = rand() % 33;
		if (arr[sum] != 'd')
		{
			out[i] = arr[sum];
			arr[sum] = 'd';
			i++;
		}
	}
	for (i = 0; i < 33; i++)
		putchar(out[i]);
	return (0);

}
