#include "dog.h"
/**
 * init_dog- Entry point
 * Description: to check if letter is uppercase
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: int
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
