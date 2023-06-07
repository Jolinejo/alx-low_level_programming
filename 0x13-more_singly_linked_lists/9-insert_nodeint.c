#include "lists.h"
/**
 * insert_nodeint_at_index- Entry point
 * Description: to check if letter is uppercase
 * @n: n
 * @head: head
 * @idx: index
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listont_t *temp;

	if (listint_t == NULL)
		return (NULL);
	if (idx == 0 && *head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;
		return (new);
	}
	temp = *head;
	idx--;
	while (idx && temp)
	{
		index--;
		temp = temp->next;
	}
	temp->next = new;
	new->next = temp;
	new->n = n;
	return (new);
}
