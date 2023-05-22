#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Entry point
 * Description: to check if letter is uppercase
 * @s: string to count its length
 * Return: no return
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
/**
 * _strcpy - Entry point
 * @src: source striing
 * @dest: dest string
 * Description: to check if letter is uppercase
 * Return: no return
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
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
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name)
	{
		new->name = _strcpy(new->name, name);
	}
	else
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (owner)
		new->owner = _strcpy(new->owner, owner);
	else
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
