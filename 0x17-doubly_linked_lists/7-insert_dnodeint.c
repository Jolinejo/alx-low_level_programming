#include "lists.h"
/**
 * insert_nodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @n: n
 * @head: head
 * @idx: index
 * Return: int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	temp = *head;
	idx--;
	if (*head == NULL)
	{
		free(new);
		return (NULL);
	}
	while (idx && temp)
	{
		idx--;
		temp = temp->next;
	}
	if (idx)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	new->n = n;
	return (new);
}
