#include "lists.h"
/**
 * dlistint_len - Entry point
 * Description: print
 * @h: head
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
