#include "dog.h"
#include <stdlib.h>
/**
 * free_dog- Entry point
 * Description: to check if letter is uppercase
 * @d: do
 * Return: int
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
