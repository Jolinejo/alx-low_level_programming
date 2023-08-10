#include "hash_tables.h"
/**
 * add_node - Entry point
 * Description: to add node
 * @head: head
 * @value: string
 * @key: key
 * Return: int
 */
hash_node_t *add_node(hash_node_t **head, const char *value, const char *key)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	hash_node_t *curr = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while (curr != NULL)
		{
			if (strcmp(key, curr->key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				free(new);
				return (curr);
			}
			curr = curr->next;
		}
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);

}
/**
 * hash_table_set - Entry point
 * Description: adds a node
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: nothing
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	if (ht->array == NULL || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	node = add_node(&(ht->array[idx]), value, key);
	if (node == NULL)
		return (0);
	return (1);
}
