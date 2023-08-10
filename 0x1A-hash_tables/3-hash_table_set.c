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

	if (new == NULL || head == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
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
	idx = key_index((unsigned char *)key, ht->size);

	node = add_node(&(ht->array[idx]), value, key);
	if (node == NULL)
		return (0);
	return (1);
}
