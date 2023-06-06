#include "lists.h"
/**
 * free_listint2- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1 = *head;

	while (head)
	{
		temp1 = *head;
		*head = (*head)->next;
		free(temp1);
	}
	*head = NULL;

}
