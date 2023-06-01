#include "lists.h"
/**
 * list_len - Entry point
 * Description: to check if letter is uppercase
 * @h: head
 * Return: int
 */
size_t list_len(const list_t *h)
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
