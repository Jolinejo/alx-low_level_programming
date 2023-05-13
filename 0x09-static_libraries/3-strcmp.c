/**
 * _strcmp - Entry point
 * Description: to concat two strings
 * @s1: destination string
 * @s2: source string
 * Return: dest modified
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j]; j++)
		if (s1[j] - s2[j])
			return (s1[j] - s2[j]);
	return (s1[j] - s2[j]);
}
