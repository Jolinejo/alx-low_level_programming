#include "hash_tables.h"
/**
 * free_list- Entry point
 * Description: frees list
 * @head: head
 * Return: nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp1 = head;
	hash_node_t *temp2;

	if (head == NULL)
		return;
	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2->key);
		free(temp2->value);
		free(temp2);
	}

}
/**
 * hash_table_delete - Entry point
 * Description: deletes table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			free_list(node);
		}
	}
	free(ht->array);
	free(ht);
}
