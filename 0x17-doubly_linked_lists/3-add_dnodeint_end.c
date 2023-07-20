#include "lists.h"
/**
 * add_dnodeint_end - Entry point
 * Description: print
 * @head: head
 * @n: number
 * Return: int
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
