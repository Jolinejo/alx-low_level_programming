#include "lists.h"
/**
 * get_nodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @index: index
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index < 0 || (index == 0 && head == NULL))
		return (NULL);
	while (index && head)
	{
		index--;
		head = head->next;
	}
	return (head);
}
