#include "lists.h"
/**
 * free_dlistint - Entry point
 * Description: print
 * @head: head
 * Return: int
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
