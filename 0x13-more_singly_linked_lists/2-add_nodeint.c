#include "lists.h"
/**
 * add_nodeint - Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @str: string
 * Return: int
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
