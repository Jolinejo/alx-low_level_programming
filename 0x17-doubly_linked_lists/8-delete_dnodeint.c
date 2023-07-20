#include "lists.h"
/**
 * delete_dnodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *del;

	if (index == 0)
	{
		temp = (*head)->next;
		if (temp != NULL)
			temp->prev = NULL;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	index--;
	if (*head == NULL)
	{
		return (-1);
	}
	while (index && temp)
	{
		index--;
		temp = temp->next;
	}
	if (index)
	{
		return (-1);
	}
	del = temp->next;
	if (del->prev != NULL)
		del->prev->next = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	free(del);
	return (1);
}
