#include "lists.h"
/**
 * print_dlistint - Entry point
 * Description: print
 * @h: head
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
