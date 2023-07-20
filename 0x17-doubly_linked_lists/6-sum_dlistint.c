#include "lists.h"
/**
 * sum_dlistint - Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int x = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		x += temp->n;
		temp = temp->next;
	}
	return (x);
}
