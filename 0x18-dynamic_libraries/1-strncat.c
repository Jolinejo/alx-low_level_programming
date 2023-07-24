/**
 * _strncat - Entry point
 * Description: to concat two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest modified
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; dest[i]; i++)
		l++;
	for (i = l, j = 0; src[j] && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = 0;
	return (dest);
}
