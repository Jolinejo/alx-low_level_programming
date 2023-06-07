#include "lists.h"
/**
 * sum_listint - Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		x += temp->n;
		temp = temp->next;
	}
	return (x);
}
