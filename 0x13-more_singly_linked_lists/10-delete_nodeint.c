#include "lists.h"
/**
 * delete_nodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	if (index == 0)
	{
		temp = (*head)->next;
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
	temp->next = temp->next->next;
	free(temp->next);
	return (1);
}
