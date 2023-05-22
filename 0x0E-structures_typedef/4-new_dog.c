#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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

	if (new == NULL)
		return (NULL);
	if (name)
	{
		new->name = name;
	}
	else
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	if (owner)
		new->owner = owner;
	else
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
