#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 * Description: to check if letter is uppercase
 * @str: string
 * Return: int
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ar;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	l++;
	ar = malloc(sizeof(char) * l);
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ar[i] = str[i];
	ar[i] = str[i];
	return (ar);
}
/**
 * new_dog- Entry point
 * Description: to check if letter is uppercase
 * @name: na
 * @age: ag
 * @owner: own
 * Return: int
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL || name == NULL || owner == NULL)
		return (NULL);
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
