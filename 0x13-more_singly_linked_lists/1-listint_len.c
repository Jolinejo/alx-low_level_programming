#include "lists.h"
/**
 * listint_len - Entry point
 * Description: to check if letter is uppercase
 * @h: head
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
