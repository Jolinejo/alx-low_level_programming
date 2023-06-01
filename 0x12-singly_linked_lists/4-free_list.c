#include "lists.h"
/**
 * free_list- Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * Return: int
 */
void free_list(list_t *head)
{
	list_t *temp1 = head;
	list_t *temp2;

	if (head == NULL)
		return;
	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2->str);
		free(temp2);
	}

}
