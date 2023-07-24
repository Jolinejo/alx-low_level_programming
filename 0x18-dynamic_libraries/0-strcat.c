/**
 * _strcat - Entry point
 * Description: to concat two strings
 * @dest: destination string
 * @src: source string
 * Return: dest modified
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; dest[i]; i++)
		l++;
	for (i = l, j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = src[j];
	return (dest);
}
