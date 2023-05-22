#include "dog.h"
#include <stdio.h>
/**
 * print_dog- Entry point
 * Description: to check if letter is uppercase
 * @d: dog
 * Return: int
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %0.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
