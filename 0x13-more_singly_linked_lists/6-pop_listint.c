#include "lists.h"
/**
 * pop_listint- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t temp;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	head = temp;
	return (i);
}
