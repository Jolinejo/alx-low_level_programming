#include "lists.h"
/**
 * _strlen - Entry point
 * Description: to check if letter is uppercase
 * @s: string to count its length
 * Return: no return
 */
unsigned int _strlen(char *s)
{
	unsigned int i;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
/**
 * add_node_end - Entry point
 * Description: to check if letter is uppercase
 * @head: head
 * @str: string
 * Return: int
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *s;
	unsigned int l;
	list_t *temp = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = s;
	l = _strlen(s);
	new->len = l;
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);

}
