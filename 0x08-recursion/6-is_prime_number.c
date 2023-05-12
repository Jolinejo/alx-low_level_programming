#include "main.h"

/**
 * checker - Entry point
 * Description: to check if letter is uppercase
 * @n: number
 * @i: divisor
 * Return: int
 */
int checker(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (checker(n, i + 1));
}
/**
 * is_prime_number - Entry point
 * Description: to check if letter is uppercase
 * @n: num
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (checker(n, 2));
}
