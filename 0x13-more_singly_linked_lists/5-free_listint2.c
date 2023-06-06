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
	listint_t *temp2;

	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	*head = NULL;

}
