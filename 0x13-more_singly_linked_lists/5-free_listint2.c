#include "lists.h"
/**
 * free_listint2- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;
	if (*head != NULL)
		while (*head)
		{
			temp1 = *head->next;
			free(*head);
			*head = temp1;
		}
	*head = NULL;
}
