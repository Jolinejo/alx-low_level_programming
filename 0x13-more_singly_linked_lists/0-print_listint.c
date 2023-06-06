#include "lists.h"
/**
 * print_listint - Entry point
 * Description: to check if letter is uppercase
 * @h: head
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
