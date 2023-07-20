#include "lists.h"
/**
 * get_dnodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @index: index
 * Return: int
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0 && head == NULL)
		return (NULL);
	while (index && head)
	{
		index--;
		head = head->next;
	}
	return (head);
}
