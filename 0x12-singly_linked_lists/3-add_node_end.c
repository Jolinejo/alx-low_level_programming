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
	while ((*head)->next)
		*head = (*head)->next;
	new->next = NULL;
	(*head)->next = new;
	return (new);

}
