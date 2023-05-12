/**
 * square_root - Entry point
 * Description: to check if letter is uppercase
 * @n: num
 * @m: sqrt
 * Return: int
 */
int square_root(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m <= n / 2)
		return (-1);
	return (square_root(n, m + 1));
}
/**
 * _sqrt_recursion - Entry point
 * Description: to check if letter is uppercase
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (square_root(n));
}	
